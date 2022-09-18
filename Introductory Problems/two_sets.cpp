/**
 *    author:  amit_dwivedi
 *    created: 18.09.2022 19:43:08
 **/
#include <bits/stdc++.h>
using namespace std;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
 
    int64_t sigma_n = (n * (n + 1)) / 2;
    if (sigma_n & 1) {
        cout << "NO\n";
        return 0;
    }
 
    set<int> a, b;
    int64_t t1 = 0, t2 = 0;
 
    for (int i = 1; i <= n; i += 2)
        a.insert(i), t1 += i;
 
    for (int i = 2; i <= n; i += 2)
        b.insert(i), t2 += i;
 
    if (abs(t1 - t2) & 1) {
        cout << "NO\n";
        return 0;
    }
    if (t1 > t2) {
        int dif_2 = (t1 - t2) / 2;
        if (dif_2 % 2 == 0) {
            a.erase(1);
            b.insert(1);
            dif_2--;
        }
        int last = *prev(a.end());
        b.erase(last - dif_2);
        a.insert(last - dif_2);
        a.erase(last);
        b.insert(last);
    } else {
        int dif_2 = (t2 - t1) / 2;
        if (dif_2 % 2 == 0) {
            a.erase(1);
            b.insert(1);
            dif_2++;
        }
        int last = *prev(b.end());
        a.erase(last - dif_2);
        b.insert(last - dif_2);
        b.erase(last);
        a.insert(last);
    }
    cout << "YES\n";
    cout << a.size() << "\n";
    for (auto& i : a) cout << i << " ";
    cout << endl;
    cout << b.size() << "\n";
    for (auto& i : b) cout << i << " ";
    cout << endl;
}
