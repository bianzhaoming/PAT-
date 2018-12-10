


#include<iostream>
#include<string>
#include<cmath>
using namespace std;
struct number {
	double mark;//满分值
	int nc;//选项个数
	int ny;//正确选项个数
	int ncount[101] = {0};        //用于记录每个选项错误次数
	int pd[101] = {0};
}s[101];
double judge(int a[5], int b[5] ,int k) {    //a为正确选项，b为输入选项
	int count = 0;    //正确计数器
	int yn = 0;        //0为答对，1为答错
	for (int i = 0; i < s[k].nc; i++) {
		if (b[i] && a[i]) {            //如果输入为正确，正确计数器+1
			count++;
		}
		else if (a[i] && !b[i]) {      //没有输入的正确选项
			s[k].ncount[i]++;
		}
		else if (!a[i] && b[i]) {      //输入了一个错误的选项
			s[k].ncount[i]++;
			yn = 1;//答错
		}
	}
	if (yn)
		return 0;
	else if (count != s[k].ny)    //部分正确
		return s[k].mark / 2;
	else if (count == s[k].ny)    //全部正确
		return s[k].mark;         //返回得分
}
int main() {
	int n, m, k;
	double sum;
	char ch;
	int t[101];        //用t记录输入的选项
	cin >> n >> m;//学生人数 选择题数
	for (int i = 0; i < m; i++) {
		cin >> s[i].mark >> s[i].nc >> s[i].ny;//分值 选项 正确选项数
		for (int j = 0; j < s[i].ny; j++) {
			cin >> ch;
			s[i].pd[ch - 'a'] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < m; j++) {
			cin >> ch >> k;
			for (int i = 0; i < 101; i++) t[i] = 0;    //t置为空
			for (int h = 0; h < k; h++) {
				cin >> ch;
				t[ch - 'a']++;
			}
			sum+=judge(s[j].pd, t,j);
			cin >> ch;
		}
		printf("%0.1lf\n", sum);
	}
	int max = 0;    
	for (int i = 0; i < m; i++) {        //寻找最大值
		for (int j = 0; j < s[i].nc; j++)
			max = s[i].ncount[j] > max ? s[i].ncount[j] : max;
	}
	if (max) {                        //存在最大值（即有错题）
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < s[i].nc; j++)
				if (s[i].ncount[j] == max) {
					cout << max << " " << i + 1 << "-" << (char)(j + 'a') << endl;
				}
		}
	}
	else
	//	cout << "Too simple";
	return 0;
}
