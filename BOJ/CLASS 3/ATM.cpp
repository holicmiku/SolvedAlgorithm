#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    int arr[1000];
    int answer[1000];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    sort(arr, arr+N);

    int sum=0;
    for(int i=0; i<N; i++){
        for(int j=0; j<=i; j++){
            sum += arr[j];
        }
    }

    cout << sum;


}