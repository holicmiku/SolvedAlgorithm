#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    int check[26]={0,};
    int pos[26];

    string word;

    getline(cin, word);

    fill_n(pos,26,-1);

    for(int i=0; i<word.length(); i++){
        if(check[word[i]-97] > 0){
            continue;
        }

        check[word[i]-97]++;
        pos[word[i]-97] = i;
    }

    for(int i=0; i<sizeof(pos)/sizeof(pos[0])++; i++){
        cout << pos[i] << " ";
    }
}