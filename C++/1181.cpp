#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string, string);

//백준 1181번 단어 정렬

int main()
{
	int n;
	string tmp;
	cin >> n;
	vector <string> word;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		word.push_back(tmp);
	}
	sort(word.begin(), word.end(), compare);
	tmp.clear();
	for (int i = 0; i < n; i++) {
		if (tmp == word[i])continue;
		cout << word[i] << '\n';
		tmp = word[i];
	}

}

bool compare(string a, string b) {
	if (a.size() == b.size()) {
		return a < b;
	}
	else {
		return a.size() < b.size();
	}
}