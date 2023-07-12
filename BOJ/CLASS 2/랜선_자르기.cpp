#include <iostream>
#include <vector>

using namespace std;

int main(){
    int K, N;

    cin >> K >> N;

    vector<long long> arr;
    long long max = -1;
    for(int i=0; i<K; i++){
        long long length;
        cin >> length;
        if(max < length){
            max = length;
        }
        arr.push_back(length);
        
    }

    
    long long left = 1;
    long long right = max;
    int answer=0;

    while(left <= right){
        long long mid = (left+right)/2;
        int count=0;

        for(int i=0; i<K; i++){
            count+= arr.at(i)/mid;
        }

        if(count >= N){
            left = mid +1;
            answer = mid;
        }
        else{
            right = mid -1;
        }
    }
    cout << answer;


}