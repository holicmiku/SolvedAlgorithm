#include <iostream>

using namespace std;

int main(){
    int T;
    int H, W, N;

    cin >> T;

    for(int test_case = 0; test_case < T; test_case++){
        int room[100][100] = {0,};
        int count=0;

        cin >> H >> W >> N;
        
        for(int i=1; i<=W; i++){ 
            for(int j=1; j<=H; j++){ 
                count+=1;
                if(count == N){
                    cout << j*100 + i <<"\n";
                    break;
                }
            }
        }


    }
}