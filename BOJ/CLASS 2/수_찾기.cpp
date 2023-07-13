#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int arr[100000];
int N;

void binary_search(int target){
    int left = 0;
    int right = N-1;
    
    

    while(left <= right){
        int mid = (left + right)/2;
        if(arr[mid] == target){
            cout << "1" << "\n";
            return;
        }
        
        if(arr[mid] > target){
            right = mid -1;
        }

        if(arr[mid] < target){
            left = mid +1;
        }
    }

    cout << "0" << "\n";
}

int main(){

    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    

    for(int i=0; i<N; i++){
       cin>> arr[i];
    }

    sort(arr,arr+N);
    int M;
    cin >> M;

    for(int i=0; i<M; i++){
        int num;
        cin >> num;
        binary_search(num);

    }

}