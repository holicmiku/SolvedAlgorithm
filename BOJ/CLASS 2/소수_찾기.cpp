#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num){
    if(num < 2){
        return false;
    }

    for(int i=2; i<=sqrt(num); i++){
        if(num % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;


    int count=0;
    for(int i=0; i<N; i++){
        int target;
        cin >> target;
        if(isPrime(target)){
            count+=1;
        }
    }

    cout << count;


}