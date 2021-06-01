#include <iostream>
#include <stack>

using namespace std;

//백준 10773 제로

int main()
{
	int n,x;
	int sum(0);
	string str;
	stack<int> st;

	cin.tie(0);
	cin.sync_with_stdio(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 0) st.pop();
		else st.push(x);
	}
	while (!st.empty()) {
		sum += st.top();
		st.pop();
	}
	cout << sum;
}