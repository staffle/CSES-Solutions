/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> moves;
void solve(int plates, int first, int middle, int last) {
    if (plates <= 0) {
        return;
    }
    solve(plates - 1, first, last, middle);
    moves.emplace_back(first, last);
    solve(plates - 1, middle, first, last);
}
int main() {
    cin.tie(0)->sync_with_stdio(0);
    int n;
    cin >> n;
    solve(n, 1, 2, 3);
    cout << moves.size() << endl;
    for (auto [i, j] : moves) {
        cout << i << " " << j << endl;
    }
}
