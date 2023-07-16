#include<iostream>

using namespace std;

int main(){
    int A, B, V;
    int answer=0;
    int current=0;
    
    cin >> A >> B >> V;
    
    if((V-A)%(A-B) == 0){
        answer = (V-A)/(A-B);
    }
    else{
        answer = (V-A)/(A-B)+1;
    }

    cout <<answer+1;





}