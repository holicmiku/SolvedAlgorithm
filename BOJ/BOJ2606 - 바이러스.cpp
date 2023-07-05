#include<iostream>

using namespace std;

int computer;
int pairCnt;
int parent[101];

void Init(int computer) {
	for (int i = 1; i <= computer; i++) {
		parent[i] = i;
	}
}

int Find(int x) {
	if (parent[x] == x) {
		return x;
	}

	return parent[x] = Find(parent[x]);

}

void Union(int x, int y) {
	x = Find(x);
	y = Find(y);

	if (x != y) {
		if (x < y) {
			parent[y] = x;
		}
		else {
			parent[x] = y;
		}
	}

}

int main() {
	cin >> computer;
	cin >> pairCnt;
	Init(computer);


	for (int i = 0; i < pairCnt; i++) {
		int x = 0;
		int y = 0;
		cin >> x >> y;
		Union(x, y);
	}

	int answer = 0;

	for (int i = 1; i <= computer; i++) {
		if (Find(i) == 1) {
			answer++;
		}
	}

	cout << answer-1; // Except Computer 1

}