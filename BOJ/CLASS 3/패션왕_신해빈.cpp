#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for(int i=0; i<T; i++){
        int N;
        cin >> N;
        map<string,int> m;
        for(int i=0; i<N; i++){
            string name;
            string kind;
            cin >> name >> kind;

            if(m.find(kind) != m.end()){
                m[kind]++;
            }
            else{
                m.insert({kind,1});
            }
        }

        int answer=1;

        for(auto j : m){
            answer *= (j.second+1);
        }
        answer-=1;
        cout << answer << "\n";
    }



}