#include <iostream>

using namespace std;


int main(){
    int number[9];
    int judge = -1; //judge = 0 -> ascending check, judge = 1 -> descending check, judge = 2 -> mixed check
    string answer;

    for(int i=1; i<=8; i++){
        cin >> number[i];
        if(i == 1 && number[1] == 1){
            judge = 0;
            continue;
        }

        if(i == 1 && number[1] == 8){
            judge = 1;
            continue;
        }

        if(judge == 0 && number[i] == i){
            answer = "ascending";
            continue;
        }

        if(judge == 0 && number[i] != i){
            answer = "mixed";
            judge=-1;
            break;
        }

        if(judge == 1 && number[i] == 9-i){
            answer = "descending";
            continue;
        }

        if(judge == 1 && number[i] != 9-i){
            answer = "mixed";
            judge=-1;
            break;
        }
        
    }

    cout<< (judge == -1 ? "mixed" : answer);

   
}