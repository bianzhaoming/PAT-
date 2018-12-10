


#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int main() {
	int a[10000];
	int N, m, n;
	cin >> N;
	for (int i = sqrt(N) + 1; i > 0; i--)
		if (N%i == 0) {
			m = i; n = N / i; break;
		}
	if (m < n)  swap(m, n);    //保证m>n;
	vector<vector<int>>b(m + 1);   //使用vector创建二维动态数组（第1行第1列为了方便理解不使用）
	for (int i = 0; i <= m; i++)
		b[i].resize(n + 1);
	for (int i = 0; i < N; i++)
		cin >> a[i];
	sort(a, a + N, greater<int>());    //降序排序
	int i = 1, j = 0, count = 0;
	while (N!=count) {
		while (j < n&&b[i][j + 1] == 0) b[i][++j] = a[count++];
		while (i < m&&b[i + 1][j] == 0)b[++i][j] = a[count++];
		while (j > 1 && b[i][j - 1] == 0)b[i][--j] = a[count++];
		while (i > 1 && b[i - 1][j] == 0)b[--i][j] = a[count++];
	}
	for (int i = 1; i <= m; i++) {
		cout << b[i][1];
		for (int j = 2; j <= n; j++)
			cout << " " << b[i][j];
		  cout << endl;
	}
	return 0;
}