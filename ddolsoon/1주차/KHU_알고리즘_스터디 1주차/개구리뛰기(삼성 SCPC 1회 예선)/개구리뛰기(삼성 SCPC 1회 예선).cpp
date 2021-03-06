// 개구리뛰기(삼성 SCPC 1회 예선).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
/*
You should use the statndard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <cstdio>
#include <vector>
#include <iostream>
#include <cstdlib>

using namespace std;

int Answer;

int a[1000000];

int main(void)
{
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using scanf function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */
	// freopen("input.txt", "r", stdin);

	/*
	   If you remove the statement below, your program's output may not be rocorded
	   when your program is terminated after the time limit.
	   For safety, please use setbuf(stdout, NULL); statement.
	 */
	//setbuf(stdout, NULL);

	scanf_s("%d", &T);
	for(test_case = 0; test_case < T; test_case++)
	{
		int n;
		cin >> n;
		/////////////////////////////////////////////////////////////////////////////////////////////
		//개구리가 건널 돌 다리
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int k;
		cin >> k;	//최대 거리
		int frog = a[n-1];

		int i = n-1;
		while (frog != 0) {

			frog -= k;
			bool impossible = true;
			for (int j = 0; j < k; j++) {
				if (frog == a[i]) {
					Answer += 1;
					impossible = false;
					break;
				}
				frog++;
			}
			if (impossible) {
				Answer = -1;
			}
			cout << frog << " : 개굴" << endl;
			i--;
			if (i == 0)
				break;
		}

		/////////////////////////////////////////////////////////////////////////////////////////////
	
        // Print the answer to standard output(screen).
        
		printf("Case #%d\n", test_case+1);
        printf("%d\n", Answer);
		Answer = 0;

		for (int i = 0; i < 1000000; i++) {
			a[i] = 0;
		}


	}

	return 0;//Your program should return 0 on normal termination.
}