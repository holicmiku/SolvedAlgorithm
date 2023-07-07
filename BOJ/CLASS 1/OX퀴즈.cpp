#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;

    int T;

    cin >> T;
    
    cin.ignore(); //because need to erase \n

    for(int test_case = 0; test_case < T; test_case++){
        
        getline(cin,str);

        int totalScore=0;
        int check=0;

        for(int i=0; i<str.length(); i++){
            if(str[i] == 'O'){
                check+=1;
                totalScore+=check;
            }
            else{
                check=0;
            }
        }

        cout<<totalScore<<"\n";

    }

}