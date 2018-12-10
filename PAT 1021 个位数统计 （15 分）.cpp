

#include<iostream>
#include<map>
using namespace std;
int main() {
	map<int, int> m;
	char ch;
	while (ch = getchar()) {		
		if (ch == '\n')break;
		m[ch -'0']++;
	}
	for (auto it = m.begin(); it != m.end(); it++)
		cout << it->first << ":" << it->second << endl;
	return 0;
}