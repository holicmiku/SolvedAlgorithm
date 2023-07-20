#include <iostream>
#include <algorithm>

using namespace std;

class Person{
    public:
    int weight;
    int height;

    Person() : weight(0) , height(0) {}
    Person(int w, int h) : weight(w) , height(h) {}
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    Person p[50];
    for(int i=0; i<N; i++){
        cin >> p[i].weight >> p[i].height;
    }

    for(int i=0; i<N; i++){
        int rank=1;
        for(int j=0; j<N; j++){
            if(p[i].weight < p[j].weight && p[i].height < p[j].height){
                rank+=1;
            }
        }
        cout << rank<< " ";
    }

}