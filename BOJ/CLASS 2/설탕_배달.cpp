#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;
   
    int count = 0;
    while(1){

        if(N<0){
            cout << -1;
            return 0;
        }

        if(N%5 == 0){
            count += N/5;
            cout << count;
            return 0;
        }

        count++;
        N-=3;
    }


}