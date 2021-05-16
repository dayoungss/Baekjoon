#include <iostream>
#include <string.h>

using namespace std;

//mystrcmp

int mystrcmp (string, string);

int main()
{
	string left, right;
	cout << "first input : ";
	cin >> left;
	cout << "second input : ";
	cin >> right;

	cout << "mystrcmp result is " << mystrcmp(left, right) << endl;
}

int mystrcmp(const string left, const string right) {
	if (left.size() != right.size())
		return left.size() - right.size();
	else {
		int i = 0;
		while (left.size() > i && right.size() > i) {
			if (left.at(i) != right.at(i))
				return left.at(i) - right.at(i);
			i++;
		}
		return 0;
	}
}