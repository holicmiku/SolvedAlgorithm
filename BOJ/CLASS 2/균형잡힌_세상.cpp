#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        string str="";
        getline(cin,str);
        if(str.length() == 1 && str[0] == '.'){
            break;
        }

        bool check = true;

        stack<char> st;

         for(int i=0; i<str.length(); i++){
            if(str[i] == '[' || str[i] == '('){
                st.push(str[i]);
            }

            if(str[i] == ']'){
                if(st.empty()){
                    cout << "no" << "\n";
                    check = false;
                    break;
                }

                if(st.top() == '['){
                    st.pop();
                    continue;
                }

                if(st.top() != '['){
                    cout << "no" << "\n";
                    check = false;
                    break;
                }
            }

            
            if(str[i] == ')'){
                if(st.empty()){
                    cout << "no" << "\n";
                    check = false;
                    break;
                }

                if(st.top() == '('){
                    st.pop();
                    continue;
                }

                if(st.top() != '('){
                    cout << "no" << "\n";
                    check = false;
                    break;
                }
            }

        }

        if(check && st.empty()){
            cout << "yes" << "\n";
            continue;
        }

        if(!st.empty() && check){
            cout << "no" << "\n";
        }


    }

}
