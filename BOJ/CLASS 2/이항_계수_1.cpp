#include <iostream>

using namespace std;

int N, K;
int answer[10];

int count=0;

void Combination(int depth, int next){
    if(depth == K){
        count++;
        return;
    }

    for(int i=next; i<N; i++){
        answer[depth] = i+1;
        Combination(depth+1,i+1);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> K;
    Combination(0,0);
    cout << count;

}