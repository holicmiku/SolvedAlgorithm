#include<iostream>
#include<string>

using namespace std;

int main(){
    string str;
    bool flag=true;
    int count=0;

    getline(cin, str);

    for(int i=0; i<str.length(); i++){
        if(str[i] == ' '){
            flag = true;
        }
        else if(flag){
            flag = false;
            count++;
        }
    }

    cout << count;

}