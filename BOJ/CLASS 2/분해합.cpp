#include <iostream>

using namespace std;

int sum;

int divide(int num){
     if(num == 10){
        sum+=10;
        num=0;
        return sum;
    }

    if(num < 10){
        return sum+=num;
    }

    sum += num%10;
    num /=10;
    return divide(num);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    bool isExist = false;
    int N;
    cin >> N;

    int num=1;
    for(int i=1; i<=N; i++){
        sum = 0;
        sum = divide(i);
        if(sum + i == N){
            cout << i;
            isExist = true;
            break;
        }
    }

    if(!isExist){
        cout << 0;
    }

}