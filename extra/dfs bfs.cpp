#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define fastio cin.tie(0)->sync_with_stdio(0)
using namespace std;

vector<int> dfs_result; // DFS 결과를 저장할 벡터
vector<int> bfs_result; // BFS 결과를 저장할 벡터
const int MAX = 10000; // 최대 노드 개수
bool visited[MAX]; // 방문 배열. visited[node] = true이면 node는 방문이 끝난 상태이다.

void dfs(const vector<int> graph[], int start) { // graph는 인접 리스트, start는 시작 노드
    visited[start] = true; // start 방문 처리
    for(int next: graph[start]) { // start의 인접 노드를 확인한다. 이 노드를 next라고 하자.
        if(!visited[next]) { // 만일 next에 방문하지 않았다면
            dfs_result.push_back(next); // next를 결과에 추가
            dfs(graph, next); // next 방문
        }
    }
}

void bfs(const vector<int> graph[], int start) { // graph는 인접 리스트, start는 시작 노드
    queue<int> q; // 큐 생성
    visited[start] = true; // start 방문 처리
    q.push(start); // start를 큐에 삽입
    while(!q.empty()) { // 큐가 빌 때까지 반복
        int current = q.front(); // 큐의 맨 앞 노드를 current로 설정
        q.pop(); // 큐에서 맨 앞 노드 제거
        for(int next: graph[current]) { // current의 인접 노드를 확인한다. 이 노드를 next라고 하자.
            if(!visited[next]) { // 만일 next에 방문하지 않았다면
                visited[next] = true; // next 방문 처리
                bfs_result.push_back(next); // next를 결과에 추가
                q.push(next); // next를 큐에 삽입
            }
        }
    }
}

int main() {
    fastio;
    int N, M, V; // N = 정점, M = 간선, V = 탐색 시작 정점
    cin >> N >> M >> V;
    vector<int> nodes[N + 1]; // 인접 리스트. nodes[i]는 정점 i와 인접한 정점들의 리스트이다.
    for (int i = 1; i <= M; i++) { // 간선 정보 입력
        int j, k;
        cin >> j >> k;
        nodes[j].push_back(k); // j와 k는 양방향 간선
        nodes[k].push_back(j);
    }
    for (int i = 1; i <= N; i++) { // 인접 리스트 정렬 (작은 수부터 방문하기 위해)
        sort(nodes[i].begin(), nodes[i].end());
    }
    fill(visited, visited + MAX, false); // 방문 배열 초기화
    dfs_result.push_back(V); // 시작 정점 V를 결과에 추가
    dfs(nodes, V); // DFS 수행
    for (int node : dfs_result) { // DFS 결과 출력
        cout << node;
        if (node != dfs_result.back()) {
            cout << " ";
        }
    }
    cout << "\n";
    fill(visited, visited + MAX, false); // 방문 배열 초기화
    bfs_result.push_back(V); // 시작 정점 V를 결과에 추가
    bfs(nodes, V); // BFS 수행
    for (int node : bfs_result) { // BFS 결과 출력
        cout << node;
        if (node != bfs_result.back()) {
            cout << " ";
        }
    }
    return 0;
}