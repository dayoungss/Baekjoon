#include <iostream>
#include <queue>
using namespace std;

//백준 18258 queue

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);
	int num, tmp;
	string str;
	queue<int> q;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push") {
			cin >> tmp;
			q.push(tmp);
		}
		else if (str == "pop") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}			
		}

		else if (str == "size") {
			cout << q.size() << '\n';;
		}
		else if (str == "empty") {
			if (q.empty()) {
				cout << 1 << '\n';
			}
			else
				cout << 0 << '\n';
		}
		else if (str == "front") {
			if (q.empty()) {
				cout << -1 << '\n';
			}else
				cout << q.front() << '\n';
		}
		else if (str == "back") {
			if (q.empty()) {
				cout << -1 << '\n';
			}else
				cout << q.back() << '\n';;
		}
			
	}
}
