#include <iostream>
#include <algorithm>

using namespace std;

class Point{
    public: 
    int x;
    int y;

    Point() : x(0), y(0) {}
    Point(int x1, int y1) : x(x1), y(y1) {}
    
};

bool compare(Point a, Point b){
    if(a.y != b.y){
        return a.y < b.y;
    }
    else{
         return a.x < b.x;
    }
}


int main(){

    int N;
    cin >> N;

    Point point[100000];

    for(int i=0; i<N; i++){
        cin >> point[i].x >> point[i].y;
    }

    sort(point,point+N, compare);

    for(int i=0; i<N; i++){
        cout << point[i].x <<" "<<point[i].y<<"\n";
    }
}