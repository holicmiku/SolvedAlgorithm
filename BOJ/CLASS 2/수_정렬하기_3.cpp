#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[10001]={0,};

    int N;

    cin >> N;

    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        arr[num]++;
    }    

    for(int i=0; i<10001; i++){
        if(arr[i] == 0){
            continue;
        }
        int count = arr[i];
        for(int j=0; j<count; j++){
            cout << i << "\n";
        }
    }    


}