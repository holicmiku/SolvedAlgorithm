#include <iostream>
#include <climits>

using namespace std;

char board[50][50];

char bcase[8][9]={
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
};

char wcase[8][9]={
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
};

int answer = INT_MAX;

int CheckBorad(int r, int c){

    int count_b=0;
    int count_w=0;

    int x=0;
    for(int i=r; i<r+8; i++){
        int y=0;
        for(int j=c; j<c+8; j++){
            if(board[i][j] != bcase[x][y]){
                count_b+=1;
                y++;
                continue;
            }
            y++;
        }
        x++;
    }

    

    x=0;
    for(int i=r; i<r+8; i++){
        int y=0;
        for(int j=c; j<c+8; j++){
            if(board[i][j] != wcase[x][y]){
                count_w+=1;
                y++;
                continue;
            }
            y++;
        }
        x++;
    }

    


    return count_b > count_w ? count_w : count_b;
}

int main(){
    int N, M;
    cin >> N >> M;

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> board[i][j];
        }
    }


    for(int i=0; i<=N-8; i++){
        for(int j=0; j<=M-8; j++){
            int count = CheckBorad(i,j);
            if(answer > count){
                answer = count;
            }
        }
    }

    cout << answer;
}