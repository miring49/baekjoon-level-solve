#include <iostream>
#include <queue>
#include <algorithm>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

int n, m;
int check[101][101]; // 시작으로부터의 거리를 저장하는 배열
int visit[101][101]; // 노드를 방문 했는지 확인하는 배열
vector< vector<char> > v_map(101, vector<char> (101));
int dx[4] = {1, 0 , -1, 0};
int dy[4] = {0, 1, 0, -1};

// 1, 0 == 우측으로 이동  0, 1 == 아래로 이동  -1, 0 == 좌측으로 이동  0, -1 == 위로 이동

void bfs(int x, int y) {
    visit[x][y] = 1;
    queue<pair<int, int> > q;
    q.push(make_pair(x, y));
    while (!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++){
            int next_x = x + dx[i]; // x축 이동
            int next_y = y + dy[i]; // y축 이동
            if (0 <= next_x and next_x < n and 0 <= next_y and next_y < m){ // 미로 범위
                if (v_map[next_x][next_y] == '1' and visit[next_x][next_y] == 0){ // 나아갈 방향이 1이고 나아갈 방향의 노드에 방문 하지 않았다면
                    check[next_x][next_y] = check[x][y] + 1;
                    visit[next_x][next_y] = 1;
                    q.push(make_pair(next_x, next_y));
                }
            }
        }
    }
}

int main() {
    fastio;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> v_map[i][j];
        }
    }
    bfs(0, 0);
    cout << check[n-1][m-1] + 1;
    return 0;
}