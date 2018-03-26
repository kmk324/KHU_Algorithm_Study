// ConsoleApplication1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

// 유사한 문제 : 백준 알고리즘 - 캥거루

#include <iostream>

using namespace std;

int n, m;

int main() {

	int t;
	int num = 1;
	cin >> t;

	while (t--) {
		cin >> n >> m;

		int twin_ans = n - m;
		int uni_ans = m - twin_ans;

		cout << '#' << num++ << ' ' << uni_ans << ' ' << twin_ans << '\n';

	}
}

// 문제 조건이 모호하고, 잘못 된듯 ..

//#include <iostream>
//
//using namespace std;
//
//int n,m; //뿔의 수, 동물 수
//
//int main()
//{
//	int t;
//
//	int num = 1;
//	cin >> t;
//	while (t--) {
//		int uni_ans = 0;
//		int twin_ans = 0;
//		cin >> n >> m;
//
//		for (int i = 1; i <= m; i++) {
//
//			for (int j = 1; j <= m; j++) {
//				if ((n == (i + (j * 2))) && (m == (i + j))) {
//					uni_ans = i;
//					twin_ans = j;
//				}
//			}
//		}
//
//		cout << '#' << num++ << ' ' << uni_ans << ' ' << twin_ans << '\n';
//	}
//
//
//
//    return 0;
//}
//
