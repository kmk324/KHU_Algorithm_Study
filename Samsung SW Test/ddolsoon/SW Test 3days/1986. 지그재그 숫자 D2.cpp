// 1986. 지그재그 숫자 D2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>

using namespace std;


int main()
{
	int t;
	int num = 1;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		long long ans = 0;
		for (int i = 1; i <= n; i++) {
			if (i % 2 == 1) {
				ans += i;
				//cout << ans << endl;
			}
			else {
				ans -= i;
				//cout << ans << endl;
			}
		}
		


		cout << '#' << num++ << ' ' << ans << '\n';
	}

    return 0;
}

