#include <iostream>
#include <algorithm>

using namespace std;

//백준 1920 수 찾기

int* a, N;

bool result(int input) {
	int start = 0;
	int end = N - 1;
	int mid;

	while (end - start >= 0) {
		mid = (start + end) / 2;

		if (a[mid] == input) {   //key 값이 배열의 중앙 값과 같을때
			return true;

		}
		else if (a[mid] > input) { //key 값이 배열의 중앙 값보다 작을때 (왼쪽으로)
			end = mid - 1;

		}
		else {  //key 값이 배열의 중앙 값보다 클때 (오른쪽으로)
			start = mid + 1;
		}
	}

	return false;

}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);

	int M, i, input;

	cin >> N;
	a = (int *)malloc(sizeof(int) * N);
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	sort(a,a+N);

	cin >> M;
	bool* b = (bool*)malloc(sizeof(bool) * M);
	for (i = 0; i < M; i++ ) {
		cin >> input;
		b[i] = result(input);
	}

	for (i = 0; i < M; i++) {
		cout << b[i] << '\n';
	}

}