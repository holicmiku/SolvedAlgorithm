#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    //1 1
    //2 1 + 6
    //3 1 + 6 + 12
    //4 1 + 6 + 12 + 18
    //1 + 3n(n-1)

    int answer=1;
    while(1){
        int num = 3*answer*answer-3*answer+1;
        if(N <= num){
            cout << answer;
            break;
        }

        answer++;
    }



}