

#include<iostream>
#include<string>
#include<map>
using namespace std;
int main() {
	int n, sum;
	map<int, int> m;
	string str;
	cin >> n;
	while (n--) {
		sum = 0;
		cin >> str;
		for (int i = 0; i < str.length(); i++)
			sum += str[i] - '0';
	  	m[sum]++;
	}
	cout << m.size() << endl;
	for(auto it = m.begin(); it != m.end(); it++) {
        if(it != m.begin()) cout<<" ";
        cout << it->first;
    }
	return 0;
}
