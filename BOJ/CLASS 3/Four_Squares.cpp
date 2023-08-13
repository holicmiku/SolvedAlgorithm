#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    int DP[50001]={0,};

    for(int i=1; i<=N; i++){
        DP[i] = DP[i-1] +1;
        for(int j=1; j*j<=i; j++){
            DP[i] = min(DP[i], DP[i-j*j]+1);
        }
    }

    cout << DP[N] << "\n";
}