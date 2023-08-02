#include <iostream>
#include <climits>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N,M,B;
    cin >> N >> M >> B;

    int ground[500][500];
    bool isHigh[500][500];

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            cin >> ground[i][j];
        }
    }

    int answer=INT_MAX;
    int height=-1;
    for(int h=0; h<=256; h++){
        int remove=0;
        int build=0;

        for(int i=0; i<N; i++){
            for(int j=0; j<M; j++){
                if(h < ground[i][j]){
                    remove += ground[i][j] - h;
                }
                else{
                    build += h - ground[i][j];
                }
            }
        }

        if(remove + B >= build){
            int time = build + remove * 2;
            if(answer >= time){
                height = h;
                answer = time;
            } 
        }

    }

    cout << answer << " " << height << "\n";

    

  

}