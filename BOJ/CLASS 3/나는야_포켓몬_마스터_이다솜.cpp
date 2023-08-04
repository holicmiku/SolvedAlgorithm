#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<string,int> word;
    vector<string> v;

    for(int i=1; i<=N; i++){
        string str;
        cin >> str;
        word[str] = i;
        v.push_back(str);
    }

    for(int i=0; i<M; i++){
        string str;
        cin >> str;

        if(atoi(str.c_str()) == 0){
            cout << word[str] << "\n";
        }
        else{
            cout << v.at(atoi(str.c_str())-1) << "\n";
        }
    }


}