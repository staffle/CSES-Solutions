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
    for (int i = 1; i <= n; ++i) {
        int64_t tot = i * i, answer = 0;
        answer += 4LL * (tot - 3);                      // corners
        answer += 8LL * (tot - 4);                      // corners_neighbours
        answer += 4LL * (i - 3) * (tot - 5);            // fist_boundary_ans;
        answer += 4LL * (i - 4) * (i * i - 7);          // second_boundary;
        answer += 1LL * (i - 4) * (i - 4) * (tot - 9);  // remaining;
        cout << answer / 2 << endl;
    }
}
