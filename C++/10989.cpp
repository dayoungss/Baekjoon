#include <iostream>

using namespace std;

//백준 10989 수 정렬하기
int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);

	int num,input,i,j;
	cin >> num;
	int arr[10001] = { 0 };
	for (i = 0; i < num; i++) {
		cin>>input;
		arr[input]++;
	}

	for (i = 0; i < 10001; i++) {
		if (arr[i]) {
			for (j = 0; j < arr[i]; j++) {
				cout << i << '\n';
			}
		}
	}
}