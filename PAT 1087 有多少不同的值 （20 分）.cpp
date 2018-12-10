


#include<iostream>
#include<set>
using namespace std;
int main() {
	set<int> myset;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) 
		myset.insert(i / 2 + i / 3 + i / 5);
	cout << myset.size();
	return 0;
}
 
