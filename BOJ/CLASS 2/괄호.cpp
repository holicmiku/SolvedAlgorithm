#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;

    cin >> T;
    cin.ignore();

    for(int test_case=0; test_case<T; test_case++){
        string str;
        getline(cin,str);
        
        stack<char> st;
        bool check = false;
        for(int i=0; i<str.length(); i++){
            if(str[i] == '('){
                st.push(str[i]);
                continue;
            }

            if(str[i] == ')'){
                if(st.empty()){
                    check = true;
                    continue;
                }

                if(st.top() =='('){
                    st.pop();
                    continue;
                }
                else{
                    check = true;
                }
            }
        }

       

        if(!st.empty()){ //비어있지않으면 일치하지않음
            cout << "NO" <<"\n";
            continue;
        }

         if(st.empty() && check){ //비어있지만, )가 더 나왔다면 NO
            cout << "NO" << "\n";
            continue;
        }

        if(st.empty() && !check){ //비어있고, )가 없었다면 YES
            cout << "YES" << "\n";
        }

       


    }




}