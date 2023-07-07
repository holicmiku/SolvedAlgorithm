#include <iostream>
#include <climits>

using namespace std;

int main(){
    int N;
    int num;

    int min = INT_MAX;
    int max = INT_MIN;

    cin >> N;

    for(int i=0; i<N; i++){
        cin >> num;
        if(min > num){
            min = num;
        }

        if(max < num){
            max = num;
        }
        
    }

    cout << min << " " << max;


}