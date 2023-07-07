#include <iostream>

using namespace std;

int main(){
    int A, B, C;
    int answer[10] = {0,};
    int number;
    
    cin >> A >> B >> C;
    number = A*B*C;

    while(1){
        answer[number%10]++;
        if(number<10){
            break;
        }
        number = number/10;
    }

    for(int i=0; i<sizeof(answer)/sizeof(answer[0]); i++){
        cout << answer[i] << "\n";
    }
}