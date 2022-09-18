/**
 *    author:  amit_dwivedi
 *    created: 18.09.2022 19:38:22
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    string s;
    cin >> s;
    char pc = '$';
    int pcnt = 0, ans = 0;
    for (auto& i : s) {
        if (i == pc)
            pcnt++;
        else {
            ans = max(ans, pcnt);
            pc = i;
            pcnt = 1;
        }
    }
    ans = max(ans, pcnt);
    cout << ans;
}
