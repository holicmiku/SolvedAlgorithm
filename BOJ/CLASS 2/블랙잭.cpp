#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int card[97];
int sum[3];
int N,M;
int max = -1;
bool isExist = false;

vector<int> arr;

int GetSum(){
    int temp=0;
    for(int i=0; i<3; i++){
        temp +=sum[i];
    }

    return temp;
}

void Combination(int depth, int next){
    if(depth == 3){
        int answer = GetSum();
        if(answer <= M){
            arr.push_back(answer);
        }
        return;
    }

    for(int i=next; i<N; i++){
        sum[depth] = card[i];
        Combination(depth+1, i+1);
    }

}

int main(){
  

    cin >> N >> M;

    for(int i=0; i<N; i++){
        cin >> card[i];
    }

    sort(card, card+N,greater<>());
    Combination(0,0);
    sort(arr.begin(), arr.end(), greater<>());

    cout << arr[0];

}