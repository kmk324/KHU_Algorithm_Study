// SW Test 05 days.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <cstring>

using namespace std;

int n;
long long d[101];

int main()
{
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	int num = 1;

	d[1] = 1; d[2] = 1; d[3] = 1; d[4] = 2; d[5] = 2;
	while (t--) {

		cin >> n;

		for (int i = 6; i <= n; i++) {
			d[i] = d[i - 1] + d[i - 5];
		}

		cout << '#' << num++ << ' ' << d[n] << '\n';
	}

    return 0;
}

