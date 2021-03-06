// 단지 번호 붙이기(2667번 문제).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;

int map[25][25];
int check[25][25];
int group[25][25];

int dx[4] = { 0,0,1, -1 };
int dy[4] = { 1,-1,0,0 };

void dfs(int x, int y, int groupNumber) {

	group[x][y] = groupNumber;
	check[x][y] = 1;

	for (int k = 0; k < 4; k++) {
		int nx = x + dx[k];
		int ny = y + dy[k];

		if (0 <= nx && nx < n && 0 <= ny && ny < n) {
			if (check[nx][ny] == 0 && map[nx][ny] == 1) {
				dfs(nx, ny, groupNumber);
			}
		}
	}

}

int main()
{

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &map[i][j]);
		}
	}
	int groupNumber = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (map[i][j] == 1 && check[i][j] == 0) {
				dfs(i, j, groupNumber++);
			}
		}
	}

	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		cout << group[i][j] << ' ';
	//	}
	//	cout << '\n';
	//}

	vector<int> ans(groupNumber);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			ans[group[i][j]] += 1;
		}
	}

	sort(ans.begin() + 1, ans.end()); //0의 개수는 제외!

	cout << groupNumber - 1 << '\n';
	for (int i = 1; i < groupNumber; i++) {
		cout << ans[i] << '\n';
	}

	return 0;
}

