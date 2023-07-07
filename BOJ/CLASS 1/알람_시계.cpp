#include <iostream>

using namespace std;

int main(){
    int H, M;
    bool flag = false;
    cin >>H>>M;

    if(M<45){
        M +=15;
        flag = true;
    }
    else{
        M -=45;
    }

    if(flag){
        cout << (H < 1 ? 23 : H-1) <<" "<<M;
    }
    else{
        cout << H << " " << M;
    }





}