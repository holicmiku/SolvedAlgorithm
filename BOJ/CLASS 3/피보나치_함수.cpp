#include <iostream>

using namespace std;

int dp[41] = {0,1,1};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    for(int i=3; i<41; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    for(int i=0; i<N; i++){
        int num;
        cin >> num;

        if(num == 0){
            cout << 1 << " " << 0 << "\n";
            continue;
        }
        else if(num == 1){
            cout << 0 << " " << 1 << "\n";
            continue;
        }
        else{
            cout << dp[num-1] << " " << dp[num] << "\n";
        }


    }
    
    




}