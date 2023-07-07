#include <iostream>

using namespace std;

int main(){
    int remain[42]={0,};
    int num;
    int answer=0;

    for(int i=0; i<10; i++){
        cin >> num;
        remain[num%42]++;      
    }

    for(int i=0; i<sizeof(remain)/sizeof(remain[0]); i++){
        if(remain[i]>0){
            answer++;
        }
    }

    cout<< answer;

}