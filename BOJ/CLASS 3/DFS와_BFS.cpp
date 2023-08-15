#include <iostream>
#include <queue>

using namespace std;

int N,M,V;
int adj[1001][1001];
bool visited[1001];

void DFS(int v){
    visited[v] = true;
    cout << v << " ";
    
    for(int i=1; i<=N; i++){
        if(adj[v][i] == 1 && visited[i] == 0){
            DFS(i);
        }
    }
}

void BFS(int v){
    queue<int> q;
    q.push(v);
    visited[v] = true;

    cout << v << " ";

    while(!q.empty()){
        v = q.front();
        q.pop();

        for(int i=1; i<=N; i++){
            if(adj[v][i] == 1 && visited[i] == 0){
                q.push(i);
                visited[i] = true;
                cout << i << " ";
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> V;

    for(int i=0; i<M; i++){
        int start,end;
        cin >> start >> end;
        adj[start][end] = 1;
        adj[end][start] = 1;
    }

    for(int i=1; i<=N; i++){
        visited[i] = false;
    }

    DFS(V);

    cout << "\n";

    for(int i=1; i<=N; i++){
        visited[i] = false;
    }

    BFS(V);



}