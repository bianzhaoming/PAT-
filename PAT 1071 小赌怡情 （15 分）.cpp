


#include <iostream>
using namespace std;
int main(){
	int t, k;
	int n1, b, tc, n2;
	cin >> t >> k;//筹码数 游戏次数
	while (k--) {
		cin >> n1 >> b >> tc >> n2;//tc 玩家下注的筹码数 ，b 赌大小
		if (tc > t)
			cout << "Not enough tokens.  Total = " << t << "." << endl;
		else {
			if (b == (n2 > n1)) {
				t += tc;
				cout << "Win " << tc << "!  Total = " << t << "." << endl;
			}
			else {
				t -= tc;
				cout << "Lose " << tc << ".  Total = " << t << "." << endl;
				if (t == 0) {
					cout << "Game Over.";
					break;
				}
			}
		}
	}
	return 0;
}