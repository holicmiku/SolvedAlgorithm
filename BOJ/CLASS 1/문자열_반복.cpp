#include <iostream>
#include <vector>

using namespace std;

int main(){
    int T;

    cin >> T;

    for(int test_case=0; test_case<T; test_case++){
        int R;
        string str;
        vector<char> answer;

        cin >> R;
        cin >> str;


        for(int j=0; j<str.length(); j++){
            for(int k=0; k<R; k++){
                answer.push_back(str[j]);
            }
        }

        for(int i=0; i<answer.size(); i++){
            cout << answer.at(i);
        }

        cout<<"\n";

    }


}