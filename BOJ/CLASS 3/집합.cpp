#include <iostream>

using namespace std;

class Set{
    public:
    bool arr[21] ={false, };
    bool isAll;
    bool isEmpty;

    Set() : isAll(false), isEmpty(false) {}

    void add(int x){
        if(arr[x]){
            return;
        }

        arr[x] = true;
    }

    void remove(int x){
        if(!arr[x]){
            return;
        }

        arr[x] = false;
    }

    bool check(int x){
        return arr[x];
    }

    void toggle(int x){
        arr[x] = !arr[x];
    }

    void all(){
        if(isAll){
            return;
        }

        for(int i=1; i<=20; i++){
            arr[i] = true;
        }
    }

    void empty(){
        if(isEmpty){
            return;
        }

        for(int i=1; i<=20; i++){
            arr[i] = false;
        }
        isEmpty = !isEmpty;
    }

    





};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    Set s;
    for(int i=0; i<N; i++){
        string str;
        int num;
        cin >> str;
        
        if(str == "add"){
            cin >> num;
            s.add(num);
            continue;
        }

        if(str == "remove"){
            cin >> num;
            s.remove(num);
            continue;
        }

        if(str == "check"){
            cin >> num;
            cout << s.check(num) << "\n";
            continue;
        }

        if(str == "toggle"){
            cin >> num;
            s.toggle(num);
            continue;
        }

        if(str == "all"){
            s.all();
            continue;
        }

        if(str == "empty"){
            s.empty();
        }

    }



}