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
	vector <string> word; // string type의 vector
	for (int i = 0; i < n; i++) { // 입력 받고 뒤에 넣어줌
		cin >> tmp;
		word.push_back(tmp);
	}
	sort(word.begin(), word.end(), compare); //길이 순 정렬
	
	tmp.clear();
	for (int i = 0; i < n; i++) { //알파벳 순 정렬
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
