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

	parent[x] = y; //x�� �� ū ���̴�.
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
			Union(Find(target), Find(target) - 1); //���� �ٷ� ���ʿ� ��ģ��. ex) 5�� ������ �̹� á���� 4���� �����ش�. (5���� �̹� á�⶧���� , 5���� ���� 6���� �翬�� �����Ƿ�)
		}
		
	}
	cout << answer;
}