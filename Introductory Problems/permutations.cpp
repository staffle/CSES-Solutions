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
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return 0;
    }
    for (int j = n - (n % 2 == 0); j >= 1; j -= 2) {
        cout << j << " ";
    }
    for (int i = n - (n & 1); i >= 2; i -= 2) {
        cout << i << " ";
    }
    cout << endl;
}
