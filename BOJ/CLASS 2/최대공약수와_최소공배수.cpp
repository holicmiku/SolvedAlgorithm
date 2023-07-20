#include <iostream>

using namespace std;

int GCD(int a, int b){

    while(b!=0){
        int r = a%b;
        a = b;
        b = r;
    }

    return a;
}

int LCM(int a, int b){
    return a * (b / GCD(a,b));
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,b;
    cin >> a >> b;

    cout << GCD(a,b) << "\n" << LCM(a,b);



}