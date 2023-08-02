#include <iostream>
#include <queue>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
   

    for(int test_case = 0; test_case < T; test_case++){
        priority_queue<int> pq;
        queue<pair<int, int>> q;
        int N, M;
        int count=0;
        cin >> N >> M;

        for(int i=0; i<N; i++){
            int value;
            cin >> value;
            q.push({i,value});
            pq.push(value);
        }

        while(!q.empty()){
           int index = q.front().first;
           int value = q.front().second;

           q.pop();

           if(pq.top() == value){
                pq.pop();
                count++;

                if(index == M){
                    cout << count << "\n";
                    break;
                }
           }
           else{
                q.push({index, value});
           }

            

        }
    }


}