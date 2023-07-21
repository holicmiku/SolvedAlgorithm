#include <iostream>
#include <deque>

using namespace std;

deque<int> card;

bool checkSize(){
    return card.size() == 1 ? true : false;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    

    for(int i=1; i<=N; i++){
        card.push_back(i);
    } 

    while(1){
        card.pop_front();
        if(checkSize()){
            break;
        }

        int num = card.at(0);
        card.pop_front();
        card.push_back(num);
    }

    cout << card.at(0);




}