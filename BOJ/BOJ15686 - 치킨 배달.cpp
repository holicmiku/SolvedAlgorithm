#include<iostream>
#include<vector>
#include<climits>
#include<cmath>

using namespace std;


int city[51][51];
int N, M;
int answer = INT_MAX;


class Point {
public: 
	int x;
	int y;

public:
	Point() : x(0), y(0) {}

	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	void printPoint() {
		cout << "(" << x << "," << y<<") ";
	}

};

vector<Point> house;
vector<Point> chickenHouse;

Point pickedChickenHouse[13];

void Combination(int depth, int next) {
	if (depth == M) {

		int cityChickenDistance = 0;
		int chickenDistance = 0;

		

		for (int i = 0; i < house.size(); i++) {
			int minDistance = INT_MAX;

			for (int j = 0; j < M; j++) {
				chickenDistance = abs(house.at(i).x - pickedChickenHouse[j].x) + abs(house.at(i).y - pickedChickenHouse[j].y);
				if (minDistance > chickenDistance) {
					minDistance = chickenDistance;
				}
			}
			cityChickenDistance += minDistance;
		}

		if (answer > cityChickenDistance) {
			answer = cityChickenDistance;
		}

		return;
	}

	for (int i = next; i < chickenHouse.size(); i++) {
		pickedChickenHouse[depth] = chickenHouse.at(i);
		Combination(depth + 1, i + 1);
	}
}

int main() {
	cin >> N;
	cin >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> city[i][j];
			
			if (city[i][j] == 0) {
				continue;
			}

			if (city[i][j] == 1) {
				house.push_back(Point(i, j));
				continue;
			}

			if (city[i][j] == 2) {
				chickenHouse.push_back(Point(i, j));
			}
		}
	}

	Combination(0, 0);
	cout << answer;
	
}