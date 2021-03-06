// 연산자끼워넣기(14888번 문제).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <vector>
#include <algorithm>

//54:45:43

using namespace std;

long long arr[101];
int n;
int oper[4];

vector<int> oper_arr;

long long max_ans = -1000000000;
long long min_ans = 1000000000;

void calcurate_maxmin() {

	long long result = arr[0];

	for (int i = 0; i < oper_arr.size(); i++) {
		
		switch (oper_arr[i]) {
		
		case 0:
			result += arr[i + 1];
			break;
		case 1:
			result -= arr[i + 1];
			break;
		case 2:
			result *= arr[i + 1];
			break;
		case 3:
			
			if (result < 0) {
				result = -result;
				result /= arr[i + 1];
				result = -result;
				
			}
			else {
				result /= arr[i + 1];
			}
			
			break;
		}
	}

	if (max_ans < result) {
		max_ans = result;
	}
	if (min_ans > result) {
		min_ans = result;
	}

}

int main()
{
	//입력
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < 4; i++) {
		cin >> oper[i];
	}

	//연산자 vector에 넣어주기
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < oper[i]; j++) {
			oper_arr.push_back(i);
		}
	}

	//for (int i = 0; i < oper_arr.size(); i++) {
	//	cout << oper_arr[i] << ' ';
	//}
	//cout << '\n';

	calcurate_maxmin(); //초기화
	next_permutation(oper_arr.begin(), oper_arr.end());

	do {
		//cout << max_ans << '\n';
		//cout << min_ans << '\n';

		calcurate_maxmin();

	} while (next_permutation(oper_arr.begin(), oper_arr.end()));

	cout << max_ans << '\n';
	cout << min_ans << '\n';

    return 0;
}

