// Queue(10845번 문제).cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"

#define QUEUE_SIZE	10000

#include <iostream>
#include <string>

class Queue {
private:
	int data[10000];
	int dataSize;
	int m_front;
	int m_rear;
public:
	Queue() {
		dataSize = 0;
		m_front = m_rear = 0;
	}

	bool empty() {
		return m_front == m_rear;
	}

	bool full() {
		return m_front == (m_rear + 1) % QUEUE_SIZE;
	}

	int size() {
		return this->dataSize;
	}

	void push(int x) {
		if (m_front == (m_rear + 1) % QUEUE_SIZE) {
			return;
		}
		else {
			dataSize += 1;

			m_rear = (m_rear + 1) % QUEUE_SIZE;
			data[m_rear] = x;
		}
	}

	int pop() {
		if (m_front == m_rear) {
			return -1;
		}
		else {
			dataSize -= 1;

			m_front = (m_front + 1) % QUEUE_SIZE;
			return data[m_front];
		}
	}

	int front() {
		if (empty()) {
			return -1;
		}
		return data[(m_front + 1) % QUEUE_SIZE];
	}

	int back() {
		if (empty()) {
			return -1;
		}
		return data[m_rear];
	}


	
};

using namespace std;

int main()
{
	Queue q;

	int n;
	ios_base::sync_with_stdio(false);
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s; 
		int x;

		cin >> s;
		if (s == "push") {
			cin >> x;
			q.push(x);
		}
		else if (s == "pop") {
			cout << q.pop() << '\n';
		}
		else if (s == "size") {
			cout << q.size() << '\n';
		}
		else if (s == "empty") {
			if (q.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
			
		}
		else if (s == "front") {
			cout << q.front() << '\n';
		}
		else if (s == "back") {
			cout << q.back() << '\n';
		}
	}

    return 0;
}

