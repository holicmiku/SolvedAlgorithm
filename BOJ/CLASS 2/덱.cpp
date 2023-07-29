#include <iostream>
#include <deque>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;


    deque<int> dq;
    for(int i=0; i<N; i++){
        string str;
        cin >> str;

        if(str == "push_front"){
            int num;
            cin >> num;
            dq.push_front(num);
            continue;
        }

        if(str == "push_back"){
            int num;
            cin >> num;
            dq.push_back(num);
            continue;
        }

        if(str == "pop_front"){
            if(!dq.empty()){
                int num = dq.front();
                cout << num << "\n";
                dq.pop_front();
                continue;
            }
            else{
                cout << -1 << "\n";
            }
        }

        if(str == "pop_back"){
            if(!dq.empty()){
                int num = dq.back();
                cout << num << "\n";
                dq.pop_back();
                continue;
            }
            else{
                cout << -1 << "\n";
            }
        }

        if(str == "size"){
            cout << dq.size() << "\n";
            continue;
        }

        if(str == "empty"){
            cout << dq.empty() << "\n";
            continue;
        }

        if(str == "front"){
            if(!dq.empty()){
                cout << dq.front() << "\n";
                continue;
            }
            else{
                cout << -1 << "\n";
            }
        }

        if(str == "back"){
            if(!dq.empty()){
                cout << dq.back() << "\n";
                continue;
            }
            else{
                cout << -1 << "\n";
            }
        }




    }



}