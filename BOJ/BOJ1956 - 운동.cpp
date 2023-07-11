#include <iostream>
#include <climits>

using namespace std;

int arr[401][401];

int V, E;
int answer = 10000000;


int main() {



    cin >> V >> E;

    for (int i = 1; i <= V; i++) {
        for (int j = 1; j <= V; j++) {
            arr[i][j] = 10000000;
        }
    }


    for (int i = 0; i < E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        arr[a][b] = c;
    }

    for (int pass = 1; pass <= V; pass++) {
        for (int start = 1; start <= V; start++) {
            for (int arrival = 1; arrival <= V; arrival++) {
                if (arr[start][arrival] > arr[start][pass] + arr[pass][arrival]) {
                    arr[start][arrival] = arr[start][pass] + arr[pass][arrival];
                }
            }
        }
    }

    for (int i = 1; i <= V; i++) {
        answer = min(answer, arr[i][i]);
    }




    cout << ((answer == 10000000) ? -1 : answer);




}