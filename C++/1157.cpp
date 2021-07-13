#include <iostream>
#include <algorithm>

using namespace std;

//백준 1157 단어 공부

int alpha[26];

void count(char c) {
	if ('Z' < c) c -= 32;
	alpha[c - 'A']++;
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);

	int i=0,res=0;
	char c;
	string s;

	cin >> s;

	while (i!=s.size()) {
		count(s.at(i));
		i++;
	}

	for (i = 0 ; i < 26; i++) {
		if (res < alpha[i]) {
			c = i + 'A';
			res = alpha[i];
		}
		else if (res == alpha[i]) c = '?';
	}

	cout << c;
}