#include <iostream>
#include <cmath>

using namespace std;

int main(){

    while(1){
        int a,b,c;
        cin >> a >> b >>c;
        if(a == 0 && b == 0 &&c==0){
            break;
        }

        double num1 = pow(a,2) + pow(b,2);
        double answer = pow(c,2);
        if(num1 == answer){
            cout <<"right"<<"\n";
            continue;
        }
        double num2 = pow(b,2) + pow(c,2);
        answer = pow(a,2);
        if(num2 == answer){
            cout <<"right"<<"\n";
            continue;
        }
        double num3 = pow(a,2) + pow(c,2);
        answer = pow(b,2);
        if(num3 == answer){
            cout <<"right"<<"\n";
            continue;
        }
        else{
            cout <<"wrong"<<"\n";
        }
    }





}