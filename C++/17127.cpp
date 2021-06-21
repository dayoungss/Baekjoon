#include <iostream>

using namespace std;

int a[11]; // 각 나무의 벚꽃 수

//백준 17127 벚꽃이 정보섬에 피어난 이유

int mul(int x, int y) { // a[x]부터 a[y-1]까지 곱하는 함수
	int res=1;
	for (int i = x; i < y; i++) {
		res *= a[i];
	}
	return res;
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);

	int sum, N, i, j, k;
	int res = 0;

	// 나무 개수와 벚꽃잎 개수 입력
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> a[i];
	}
	
	for (i = 1; i <= N - 3; i++) {
		for (j = i+1; j <= N - 2; j++) {
			for (k = j+1; k <= N - 1; k++) {
				sum = mul(0, i)+mul(i,j)+mul(j,k)+mul(k,N);
				res = max(res, sum);
			}
		}
	}
	cout << res;
}