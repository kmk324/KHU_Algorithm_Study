// 2007. 패턴 마디의 길이 D2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <string>
using namespace std;

bool check_duplicate(string test) {

}

int main()
{
	int t;
	int num = 1;
	long long ans = 0;
	cin >> t;
	string s;
	while (t--) {
		cin >> s;

		if (check_duplicate(s)) {

		}

		cout << '#' << num++ << ans << '\n';
	}

    return 0;
}

