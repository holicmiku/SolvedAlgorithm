#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    long long DP[101];
    DP[1] = DP[2] = DP[3] = 1;
    DP[4] = DP[5] = 2; 
    for(int i=0; i<T; i++){
        int N;
        cin >> N;
        for(int i=6; i<=N; i++){
            DP[i] = DP[i-1] + DP[i-5];
        }

        cout << DP[N] << "\n";
        
    }

}