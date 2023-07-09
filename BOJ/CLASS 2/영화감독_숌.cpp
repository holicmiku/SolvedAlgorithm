#include<iostream>

using namespace std;

int main(){

    int N;

    cin >> N;

    int count = 0;
    int num = 0;
    int temp = 0;

    while(count < N){
        num++;
        temp = num;

        while(temp != 0){
            if(temp%1000 == 666){
                count++;
                break;
            }
            else{
                temp/=10;
            }
        }
    }

    cout << num;

}