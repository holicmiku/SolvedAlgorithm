#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    long long DP[1001] = {0,};

    DP[1] = 1;
    DP[2] = 3;

    for(int i=2; i<=N; i++){
        if(i%2 == 0){
            DP[i] = 2*DP[i-1]+1;
        }
        else{
            DP[i] = 2*DP[i-1]-1;
        }

        DP[i] = DP[i]%10007;
    }
    cout << DP[N] << "\n";
}