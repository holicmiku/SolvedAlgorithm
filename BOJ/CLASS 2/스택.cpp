#include <iostream>

using namespace std;

class Stack{
    public:
    int arr[10000];
    int pos=0;

    void push(int X){
        
        arr[pos] = X;
        pos++;
    }

    void pop(){
        
        if(pos == 0){
            cout << -1 << "\n";
        }
        else{
            cout << arr[pos-1] << "\n";
            arr[pos-1] = 0;
            pos--;
        }
    }

    void size(){
        
        cout << pos << "\n";
    }

    void empty(){
        
        if(pos == 0){
            cout << 1 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }

    void top(){
        
        if(pos == 0){
            cout << "-1" <<"\n";
        }
        else{
            cout << arr[pos-1] << "\n";
        }
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    Stack stack;

    int N;
    cin >> N;
    cin.ignore();
    for(int i=0; i<N; i++){
        string order;
        int num;

        cin >> order;
        if(order == "push"){
            cin >> num;
            stack.push(num);
            continue;
        }

        if(order == "top"){
            stack.top();
            continue;
        }

        if(order == "size"){
            stack.size();
            continue;
        }

        if(order == "empty"){
            stack.empty();
            continue;
        }

        if(order == "pop"){
            stack.pop();
            continue;
        }

    }





}