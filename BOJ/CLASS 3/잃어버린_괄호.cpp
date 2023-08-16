#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cin >> str;

    string num = "";
    int answer=0;
    bool check = false;

    for(int i=0; i<=str.size(); i++){
        if(str[i] == '-' || str[i] == '+' || i == str.size()){
            if(check){
                answer-=stoi(num);
                num = "";
            }

            if(!check){
                answer+=stoi(num);
                num = "";
            }
        }
        else{
            num +=str[i];
        }

        if(str[i] == '-'){
            check=true;
        }
    }

    cout << answer << "\n";
}