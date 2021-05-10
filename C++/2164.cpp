#include <iostream>
#include <queue>
using namespace std;

//백준 2164 카드2

int main()
{
	int n;
	queue<int> q;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		q.push(i);
	}

	while (q.size() > 1) {
		q.pop();
		q.push(q.front());
		q.pop();
	}

	cout << q.front();
}
