#include <iostream>

using namespace std;

int main(){
    string word;
    int i;

    cin >> word;
    cin.ignore();
    cin >> i;

    cout<<word[i-1];
}