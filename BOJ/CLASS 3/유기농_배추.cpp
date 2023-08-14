#include <iostream>
#include <queue>

using namespace std;

int arr[51][51] = {0,};
int M,N;

void BFS(int r, int c){

    int dx[] = {-1,1,0,0};
    int dy[] = {0,0,-1,1};
    
    queue<pair<int,int>> q;
    
    q.push({r,c});
    
    arr[r][c] = 0;
    
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;

        q.pop();

        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];

            if(nx<0 || ny<0 || nx>=M || ny>=N){
                continue;
            }

            if(arr[nx][ny] == 1){
                arr[nx][ny] = 0;
                q.push({nx,ny});
            }
        }

    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for(int t=0; t<T; t++){
        int K;

        cin >> M >> N >> K;
        for(int j=0; j<K; j++){
            int x,y;
            cin >> x >> y;
            arr[x][y] = 1;
        }

        int answer = 0;
        
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(arr[i][j] == 1){
                    BFS(i,j);
                    answer++;
                }
            }
        }

        cout << answer << "\n";
    }





}