#include<iostream>
#include<math.h> //abs
#include<climits> //INT_MAX

using namespace std;

int N;
int teamStatus[21][21];
bool isSelected[22];

int answer = INT_MAX;

void dfs(int depth, int next) {
	if (depth == N / 2) {
		int startTeamStatus;
		int linkTeamStatus;
		startTeamStatus = 0;
		linkTeamStatus = 0;

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (isSelected[i] == true && isSelected[j] == true) {
					startTeamStatus += teamStatus[i][j];
				}

				if (isSelected[i] == false && isSelected[j] == false) {
					linkTeamStatus += teamStatus[i][j];
				}
			}
		}

		int temp = abs(startTeamStatus - linkTeamStatus);

		if (answer > temp) {
			answer = temp;
		}
		return;
	}

	for (int i = next; i < N; i++) {
		if (!isSelected[i]) {
			isSelected[i] = true;
			dfs(depth + 1, i+1);
			isSelected[i] = false;
		}
	}
}


int main() {

	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> teamStatus[i][j];
		}
	}

	dfs(0, 1);

	cout << answer;
	
}