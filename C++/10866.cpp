#include <iostream>
#include <deque>

using namespace std;

//백준 10866 덱

int main()
{
	int n,x;
	string str;
	deque<int> dq;

	cin.tie(0);
	cin.sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "push_front") {
			cin >> x;
			dq.push_front(x);
		}
		else if (str == "push_back") {
			cin >> x;
			dq.push_back(x);
		}
		else if (str == "pop_front") {
			if (dq.empty()) cout << "-1" << "\n";
			else {
				cout << dq.front() << "\n";
				dq.pop_front();
			}
		}
		else if (str == "pop_back") {
			if (dq.empty()) cout << "-1" << "\n";
			else {
				cout << dq.back() << "\n";
				dq.pop_back();
			}
		}
		else if (str == "size") {
			cout << dq.size() << "\n";
		}
		else if (str == "empty") {
			if (dq.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";

		}
		else if (str == "front") {
			if (dq.empty()) cout << "-1" << "\n";
			else cout << dq.front() << "\n";
		}
		else if (str == "back") {
			if (dq.empty()) cout << "-1" << "\n";
			else cout << dq.back() << "\n";
		}
	}
}