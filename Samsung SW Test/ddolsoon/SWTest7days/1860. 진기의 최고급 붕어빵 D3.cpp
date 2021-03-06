// 1860. 진기의 최고급 붕어빵 D3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <queue>

using namespace std;

string ans;

int main()
{
	int t;
	cin >> t;

	priority_queue<int> wait_time;

	int num = 1;
	int fish_bread = 0;
	bool ans = true;

	while (t--) {


		int n, m, k;
		cin >> n >> m >> k;
		int temp;
		for (int i = 0; i < n; i++) {
			cin >> temp;
			wait_time.push(-temp);
		}


		for (int i = 0; i <= 12000; i++) {
			
			if (i != 0 && i % m == 0) {
				fish_bread += k;
			}
			
			if (!wait_time.empty()) {
				while (-wait_time.top() == i) {
					fish_bread -= 1;
					wait_time.pop();


					if (wait_time.empty())
						break;
				}
			}

			if (fish_bread < 0) {
				ans = false;
				break;
			}

		}

		if (ans) {
			cout << '#' << num++  << ' '<< "Possible" << '\n';
		}
		else {
			cout << '#' << num++ << ' ' << "Impossible" << '\n';
		}

		while (!wait_time.empty()) {
			wait_time.pop();
		}
		fish_bread = 0;
		ans = true;

	}


    return 0;
}

