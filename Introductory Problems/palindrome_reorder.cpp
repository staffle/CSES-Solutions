/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
 
    map<char, int> f;
    for (int i = 0; i < (int)s.length(); ++i)
        f[s[i]]++;
 
    int odd = 0;
    for (auto [i, c] : f) {
        odd += (c & 1);
    }
    if (odd > 1) {
        cout << "NO SOLUTION\n";
        return 0;
    }
 
    string a1, a2;
    char odd_char = '$';
    for (auto [i, c] : f) {
        if (c & 1) odd_char = i;
        for (int j = 0; j < c / 2; j++) {
            a1 += i;
            a2 += i;
        }
    }
    if (odd_char != '$')
        a1 += odd_char;
 
    reverse(begin(a2), end(a2));
 
    cout << a1 + a2;
    return 0;
}
