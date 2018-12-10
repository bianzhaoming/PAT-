


#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cin >> s;
    int len = s.length(), result = 0, count_p = 0, count_t = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == 'T')
            count_t++;
    }
    for (int i = 0; i < len; i++) {
        if (s[i] == 'P') count_p++;
        if (s[i] == 'T') count_t--;
        if (s[i] == 'A') 
        result = (result + (count_p * count_t) % 1000000007) % 1000000007;
    }
    cout << result;
    return 0;
}
  

