// 욕심쟁이판다(1937번 문제).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

//해결 못함 ㅠㅠ..

using namespace std;

int d[501][501];
int a[501][501];
int check[501][501];

int dx[4] = { 0,0,1,-1 };
int dy[4] = { 1,-1,0,0 };

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> a[i][j];
			d[i][j] = 1;
		}
	}

	//d[i][j] = (i,j)에 판다가 도착했을때, 최대로 살수 있는 일수
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < 4; k++) {
				int x = i + dx[k];
				int y = j + dy[k];
				if (0 <= x && x <= n - 1 && 0 <= y && y <= n - 1 && a[i][j] > a[x][y] && d[i][j] < d[x][y] + 1) {
					d[i][j] = d[x][y] + 1;
				}
			}

		}
	}

	long long ans = d[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (ans < d[i][j])
				ans = d[i][j];
			cout << d[i][j] << ' ';
		}
		cout << endl;
	}

	cout << ans << endl;

    return 0;
}

