#include <iostream>
#include <climits>

using namespace std;

int main(){

    int N;
    double num[1000];
    int max = INT_MIN;
    double answer=0.0;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> num[i];
        if(max < num[i]){
            max = num[i]; 
        }
    }


    
    for(int i=0; i<N; i++){
        num[i] = num[i] / (double)max * 100;
        answer += num[i];
    }

    cout.precision(3);

    cout << answer/N;

}