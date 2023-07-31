#include <iostream>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    for(int test_case=0; test_case<T; test_case++){
        int N, M;
        int answer=0;
        int arr[30][30] = {0,};
        cin >> N >> M;

        for(int i=1; i<=M; i++){
            arr[1][i] = i;
        }

        for(int i=2; i<=N; i++){
            for(int j=2; j<=M; j++){
                arr[i][j] = arr[i-1][j-1] + arr[i][j-1];
            }
        }

        cout << arr[N][M] << "\n";
    }




}