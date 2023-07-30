#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int M, N; 
    cin >> M >> N;


    vector<int> arr;

    arr.push_back(0);
    arr.push_back(0);
    for(int i=2; i<=N; i++){
        arr.push_back(i);
    }

    for(int i=2; i<=sqrt(N); i++){
        if(arr[i] == 0){
            continue;
        }

        for(int j=i*i; j<=N; j+=i){
            arr[j] = 0;
        }
    }

    for(int i=M; i<=N; i++){
        if(arr[i] != 0){
            cout << arr[i] <<"\n";
        }
    }

}