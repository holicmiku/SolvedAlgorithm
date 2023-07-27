#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;    

    vector<int> arr;
    
    if(N==0){
        cout << 0;
        return 0;
    }

    int count = round(N * 0.15);

    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    double sum=0;

    for(int i=count; i<N-count; i++){
        sum += arr[i];
    }

    
    cout << round(sum/(N-count*2));







}