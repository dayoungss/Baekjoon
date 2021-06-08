#include <iostream>
#include <algorithm>

using namespace std;

//백준 1427 소트인사이드
int main()
{
	string num;
	cin >> num;
	sort(num.begin(), num.end(), greater<>());
	cout << num;
}