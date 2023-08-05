#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;

    cin >> N >> K;

    int arr[10];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    int count=0;
    for(int i=N-1; i>=0; i--){
        if(K/arr[i] > 0){
            count+=K/arr[i];
            K = K%arr[i];
        }
    }

    cout << count;




}