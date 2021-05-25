#include <iostream>
#include <stack>
using namespace std;

//백준 10828 stack

int main()
{
	cin.tie(0);
	cin.sync_with_stdio(0);

	int num, tmp;
	string str;
	stack<int> s;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push") {
			cin >> tmp;
			s.push(tmp);
		}
		else if (str == "pop") {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}			
		}

		else if (str == "size") {
			cout << s.size() << '\n';;
		}
		else if (str == "empty") {
			if (s.empty()) {
				cout << 1 << '\n';
			}
			else
				cout << 0 << '\n';
		}
		else if (str == "top") {
			if (s.empty()) {
				cout << -1 << '\n';
			}else
				cout << s.top() << '\n';
		}
	}
}
