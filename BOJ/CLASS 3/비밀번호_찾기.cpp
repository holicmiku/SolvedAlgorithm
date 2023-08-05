#include <iostream>
#include <map>
#include <iterator>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    map<string, string> m;
    for(int i=0; i<N; i++){
        string address, password;
        cin >> address >> password;
        m[address] = password;
    }

    for(int i=0; i<M; i++){
        string address;
        cin >> address;
        map<string,string>::iterator it;
        it = m.find(address);
        if(it != m.end()){
            cout << m[address] << "\n";
        }
    }




}