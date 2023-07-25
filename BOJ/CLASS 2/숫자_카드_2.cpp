#include <iostream>
#include <map>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M;
    cin >> N;

    map<int,int> card;
    for(int i=0; i<N; i++){
        int num;
        cin >> num;
        card[num]++;
    }

    cin >> M;

    for(int i=0; i<M; i++){
        int num;
        cin >> num;
        cout << card[num] << " ";
    }




}