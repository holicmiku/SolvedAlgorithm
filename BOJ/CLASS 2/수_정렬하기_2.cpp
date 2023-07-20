#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    vector<int> arr;

    cin >> N;
    
    for(int i=0; i<N; i++){
       int num;
       cin >> num;
       arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    for(int i=0; i<N; i++){
        cout << arr[i] << "\n";
    }





}