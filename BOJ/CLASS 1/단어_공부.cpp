#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    string answer;

    int alphabet[26] = {0,};
   
    getline(cin, str);
    
    for(int i=0; i<str.length(); i++){
        if(str[i] - 97 >= 0){
            alphabet[str[i] - 97]++;
        }
        else{
            alphabet[str[i] - 65]++;
        }
    }

    int max = -1;
    int pos = 0;
    for(int i=0; i<sizeof(alphabet)/sizeof(alphabet[0]); i++){
        if(max < alphabet[i]){
            max = alphabet[i];
            pos = i;
        }
    }
    
    

    int duplicate = 0;
    for(int i=0; i<sizeof(alphabet)/sizeof(alphabet[0]); i++){
        if(max == alphabet[i]){
            duplicate++;
        }
    }
    
    

    cout << (duplicate == 1 ? (char)(pos+65) : '?');

}