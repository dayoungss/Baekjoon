#include <iostream>

using namespace std;

//백준 1018 체스판 다시 칠하기

string input[50];

int board(int x, int y) {

	int cntB = 0, cntW = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2) { // 체스판 행+열 값에 따라 칠해야 하는 색 구별
				if (input[x+i][y+j] == 'B') ++cntW;
				else ++cntB;
			}
			else {
				if (input[x + i][y + j] == 'W') ++cntW;
				else ++cntB;
			}
		}
	}
	return min(cntB, cntW);
}

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); cout.tie(NULL);

	int i,j, res=10000;
	int N, M; // N : 행, M : 열

	cin >> N >> M;

	for (i = 0; i < N; i++) {
		cin >> input[i];
	}

	for (i = 0; i <= N - 8 ; i++) {
		for (j = 0; j <= M - 8; j++) {
			res = min(res,board(i, j));
		}
	}

	cout << res ;

}