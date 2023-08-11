#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N;
    cin >> N;

    long long DP[1000]={0,};

    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 3;

    for(int i=3; i<=N; i++){
        DP[i] = DP[i-2]%10007 + DP[i-1]%10007;
    }

    cout << DP[N]%10007 << "\n";

}