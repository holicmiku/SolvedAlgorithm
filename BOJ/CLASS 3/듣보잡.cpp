#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> list;
    vector<string> answer;
    int N,M;
    cin >> N >> M;

    for(int i=0; i<N; i++){
        string str;
        cin >> str;
        list[str] = 1;
    }

    for(int i=0; i<M; i++){
        string str;
        cin >> str;
        map<string, int>::iterator it;
        it = list.find(str);
        if(it != list.end()){
            answer.push_back(str);
        }
    }

    sort(answer.begin(), answer.end());

    cout << answer.size() << "\n";
    for(int i=0; i<answer.size(); i++){
        cout << answer[i] << "\n";
    }

}