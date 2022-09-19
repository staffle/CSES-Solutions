/**
 *    author:  amit_dwivedi
 *    created: 19.09.2022 14:59:47
 **/
#include <bits/stdc++.h>
using namespace std;
bool vis[7][7];
string path;
 
//*********  D  R   U  L
int dr[] = {+1, 0, -1, 0};
int dc[] = {0, +1, 0, -1};
 
bool is_valid(int i, int j) {
    return i >= 0 && i < 7 && j >= 0 && j < 7;
}
 
int recur(int pos, int i, int j) {
    if ((i == 6 && j == 0) || pos == path.length()) {
        return (pos == path.length()) && (i == 6 && j == 0);
    }
 
    int ans = 0;
    if (is_valid(i + 1, j) && !vis[i + 1][j] && is_valid(i - 1, j) && !vis[i - 1][j]) {
        if ((!is_valid(i, j + 1) || vis[i][j + 1]) && (!is_valid(i, j - 1) || vis[i][j - 1])) {
            return 0;
        }
    }
    if (is_valid(i, j + 1) && !vis[i][j + 1] && is_valid(i, j - 1) && !vis[i][j - 1]) {
        if ((!is_valid(i + 1, j) || vis[i + 1][j]) && (!is_valid(i - 1, j) || vis[i - 1][j])) {
            return 0;
        }
    }
    if (path[pos] != '?') {
        int dir = path[pos] - '0';
        int nx = i + dr[dir], ny = j + dc[dir];
        if (is_valid(nx, ny) && vis[nx][ny] == false) {
            vis[nx][ny] = true;
            ans += recur(pos + 1, nx, ny);
            vis[nx][ny] = false;
        }
    } else {
        for (int dir = 0; dir < 4; dir++) {
            int nx = i + dr[dir], ny = j + dc[dir];
            if (is_valid(nx, ny) && vis[nx][ny] == false) {
                vis[nx][ny] = true;
                ans += recur(pos + 1, nx, ny);
                vis[nx][ny] = false;
            }
        }
    }
    return ans;
}
 
int main() {
    cin.tie(0)->sync_with_stdio(0);
    cin >> path;
    for (auto& i : path) {
        if (i != '?') {
            if (i == 'D')
                i = '0';
            else if (i == 'R')
                i = '1';
            else if (i == 'U')
                i = '2';
            else
                i = '3';
        }
    }
    vis[0][0] = true;
    cout << recur(0, 0, 0);
}
