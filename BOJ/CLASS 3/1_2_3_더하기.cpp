#include <iostream>

using namespace std;

int main(){

    int T;
    cin >> T;

    int DP[11];
    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4; 
    for(int i=0; i<T; i++){
        int N;
        cin >> N;
        for(int i=4; i<=N; i++){
            DP[i] = DP[i-3]+DP[i-2]+DP[i-1];
        }
        cout << DP[N]<<"\n";
    }



}