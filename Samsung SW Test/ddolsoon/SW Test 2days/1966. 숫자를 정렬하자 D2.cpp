// 1966. 숫자를 정렬하자 D2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> arr;

/*
	주의할점 : vector는 초기화 시켜놓지 않으면, 인덱스 바로 접근 불가능.
*/

int main()
{
	int t;
	cin >> t;
	int num = 1;

	while (t--) {
		int n;
		cin >> n;

		for (int i = 0; i < n; i++) {
			int input;
			cin >> input;
			arr.push_back(input);
		}

		sort(arr.begin(), arr.end());

		cout << '#' << num++ << ' ';

		for (int i = 0; i < n; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';

		arr.clear();
	}

    return 0;
}

