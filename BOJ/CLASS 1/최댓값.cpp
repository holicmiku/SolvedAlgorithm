#include <iostream>

using namespace std;

int main(){
    int number[9];
    int pos=0;
    int max = -1;

    for(int i=0; i<sizeof(number)/sizeof(number[0]); i++){
        cin >> number[i];
        if(max < number[i]){
            max = number[i];
            pos = i;
        }
    }

    cout << max << "\n";
    cout << pos+1;
}