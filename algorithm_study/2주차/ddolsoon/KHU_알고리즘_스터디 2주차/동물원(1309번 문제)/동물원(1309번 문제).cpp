// 동물원(1309번 문제).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int d[100001][3];

int main()
{
	int n;
	cin >> n;

	d[1][0] = 1;
	d[1][1] = 1;
	d[1][2] = 1;
	for (int i = 2; i <= n; i++) {
		//d[i] = 2 * d[i - 2] + d[i - 1];
		d[i][0] = (d[i - 1][1] + d[i - 1][2]) % 9901;
		d[i][1] = (d[i - 1][0] + d[i - 1][2]) % 9901;
		d[i][2] = (d[i - 1][0] + d[i - 1][1] + d[i - 1][2]) % 9901;
	}

	long long ans = (d[n][0] + d[n][1] + d[n][2]) % 9901;

	cout << ans << endl;

    return 0;
}

