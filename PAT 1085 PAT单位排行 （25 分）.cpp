


#include<iostream>
#include<string>
#include<map>
#include<set>
#include<algorithm>
using namespace std;
struct school {
	string id;					//校名
	set<string> student;		//学生集合
	double  sum;				//学校总分，注意最后取整
  bool operator <( const school& b) const {      //重载<,定义学校间的比较方式
		if ((int)sum != (int)b.sum)						//比较学校总分
			return (int)sum > (int)b.sum;
		else if (student.size() != b.student.size())	//比较学生人数
			return student.size()< b.student.size();
		else											//比较校名
			return id < b.id;
	}
};
int main(){		//权值表
	map<char, double> trans = { make_pair('B', 2.0 / 3),make_pair('A', 1) ,make_pair('T',1.5) };	
	map<string, school> myschool;
	set<school> result;  //map只能根据第一个参数排序，所以后续要将map中的结构体转到集合set中
	int N;
	cin >> N;
	string student_id, school_name;
	int mark;	
	for (int i = 0; i < N; i++) {
		cin >> student_id >> mark >> school_name;
		transform(school_name.begin(), school_name.end(), school_name.begin(), ::tolower);//校名转小写
		myschool[school_name].id = school_name;
		myschool[school_name].student.insert(student_id.substr(1, string::npos));
		myschool[school_name].sum += trans[student_id[0]]*mark;
	}
	for (auto it = myschool.begin(); it != myschool.end(); it++)
		result.insert(it->second);  //将map的结构体存到set集合中，方便排序
	int ranking = 0 /*排名*/ , count = 0   /*计数器*/; 
	int pre=-1;				//前驱分数
	cout << result.size() << endl;
	for (auto it = result.begin(); it != result.end(); it++) {
		count++;
		if ((int)it->sum != pre)	//与前驱分数不同时，更新ranking
			ranking = count;
		pre = (int)it->sum;
	//	cout << ranking << " " << it->id << " " << (int)it->sum << ' ' << it->student.size() << endl;
	}
	return 0;
}


//利用map（可直接根据校名索引）录入数据，但由于map只能根据第一个参数（key）进行排序，
//所以只能将数据转入set集合中（按自定义的结构体比较方式排序），
//最后排名，可设置一个前驱分数，当前后总分不同时，更新排名。 
  //注意：1、总分要取整；
            // 2、最后的输出语句我换成了printf，增加效率，否则测试点5运行超时；
            // 3、注意sum是求和之后再取整（测试点5答案错误）