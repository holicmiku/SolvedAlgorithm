#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    vector<char> v;
    int N;
    cin >> N;
    
    int count=1;

    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        
        while(count<=num){
            v.push_back('+');
            st.push(count);
            count++;
        }

        if(st.top() == num){
            v.push_back('-');
            st.pop();
        }else{
            cout << "NO" << "\n";
            return 0;
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << "\n";
    }





}