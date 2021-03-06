// 최장공통부분수열(3304번 문제 D3).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int max(int a, int b) {
	return a > b ? a : b;
}

string str1;
string str2;

int d[1001][1001];

int main()
{
	ios_base::sync_with_stdio(false);

	int t;
	cin >> t;

	int num = 1;
	while (t--) {

		cin >> str1;
		cin >> str2;

		for (int i = 1; i <= str1.size(); i++) {
			for (int j = 1; j <= str2.size(); j++) {
				if (str1[i - 1] == str2[j - 1]) {
					d[i][j] = d[i - 1][j - 1] + 1;
				}
				else {
					d[i][j] = max(d[i - 1][j], d[i][j - 1]);
				}
			}
		}



		long long ans = d[1][1];
		for (int i = 1; i <= str1.size(); i++) {
			for (int j = 1; j <= str2.size(); j++) {
				if (ans < d[i][j]) {
					ans = d[i][j];
				}
				//cout << d[i][j] << ' ';
			}
			//cout << '\n';
		}


		memset(d, 0, sizeof(d));



		cout << '#' << num++ << ' ' << ans << '\n';
	}

	return 0;
}

//N^4 복잡도 를가짐

//#include <iostream>
//#include <string>
//#include <cstring>
//
//using namespace std;
//
//string str1;
//string str2;
// 
//int d[1000][1000];
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//
//	int t;
//	cin >> t;
//
//	int num = 1;
//	while (t--) {
//
//		cin >> str1;
//		cin >> str2;
//
//		for (int i = 0; i < str1.size(); i++) {
//			for (int j = 0; j < str2.size(); j++) {
//
//				if (str1[i] == str2[j]) {
//					int max = d[0][0];
//					for (int u = 0; u < i; u++) {
//						for (int v = 0; v < j; v++) {
//							if (max < d[u][v])
//								max = d[u][v];
//						}
//					}
//					
//					d[i][j] = max + 1;
//					//d[i][j] = 1;
//				}
//			}
//		}
//
//		long long ans = d[0][0];
//		for (int i = 0; i < str1.size(); i++) {
//			for (int j = 0; j < str2.size(); j++) {
//				if (ans < d[i][j]) {
//					ans = d[i][j];
//				}
//				//cout << d[i][j] << ' ';
//			}
//			//cout << '\n';
//		}
//
//
//		//memset(d, 0, sizeof(d));
//
//
//
//		cout << '#' << num++ << ' ' << ans << '\n';
//	}
//
//    return 0;
//}
//





