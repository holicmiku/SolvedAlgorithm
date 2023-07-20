#include <iostream>
#include <cmath>

using namespace std;

long long sum=1;

long long mypow(long long depth, long long current){
    if(depth == 0){
        return 1;
    }

    if(depth == current){
        return sum*31; 
    }

    sum %= 1234567891;
    sum *= 31;
    return mypow(depth, current+1);
}


int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L;
    string str;
    cin >> L;
    cin >> str;

    int arr[50];
    for(int i=0; i<L; i++){
        arr[i] = str[i]-96;
    }

    long long answer=0;
    //a % b = X  => (a % c) % (b % c) = X % c
    for(int i=0; i<L; i++){
        long long a = arr[i];
        sum = 1;
        long long b = mypow(i,1);
        answer+=a*b;
    }

    cout <<answer%1234567891;

}