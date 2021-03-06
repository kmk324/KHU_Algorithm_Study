// 1493. 수의새로운연산.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <vector>

using namespace std;

struct Point {
	int x;
	int y;
};

int coordinate[301][301];
vector<pair<int,int>> inverse_coord(100000);

int main()
{
	int k = 1;
	for (int y = 1; y <= 300; y++) {
		for (int x = 1; x <= y; x++) {
			coordinate[y - x + 1][x] = k;
			inverse_coord[k] = make_pair(y - x + 1, x);
			k += 1;
		}
	}

	/*for (int y = 1; y <= 10000; y++) {
		for (int x = 1; x <= 10000; x++) {
			cout << coordinate[x][y] << ' ';
		}
		cout << '\n';
	}*/

	int t;
	cin >> t;
	int num = 1;
	while (t--) {

		int p, q;
		cin >> p >> q;

		Point point1,point2;

		pair<int, int> temp = inverse_coord[p];
		point1.x = temp.first;
		point1.y = temp.second;
		temp = inverse_coord[q];

		point2.x = temp.first;
		point2.y = temp.second;

		Point p3;
		p3.x = point1.x + point2.x;
		p3.y = point1.y + point2.y;

		cout <<'#' << num++ << ' ' << coordinate[p3.x][p3.y] << '\n';
	}
	return 0;
}

