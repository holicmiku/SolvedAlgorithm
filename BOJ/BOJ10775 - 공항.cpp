#include <iostream>

using namespace std;

int parent[100001];

void Init(int num) {
	for (int i = 1; i <= num; i++) {
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

	parent[x] = y; //x가 더 큰 수이다.
}

int main() {
	int G, P;
	int answer = 0;

	cin >> G >> P;
	
	Init(G);

	for (int i = 0; i < P; i++) {
		int target;
		cin >> target;

		if (Find(target) == 0) {
			break;
		}
		else {
			answer++;
			Union(Find(target), Find(target) - 1); //공항 바로 옆쪽에 합친다. ex) 5번 공항이 이미 찼으면 4번에 합쳐준다. (5번은 이미 찼기때문에 , 5번이 차면 6번은 당연히 못들어가므로)
		}
		
	}
	cout << answer;
}