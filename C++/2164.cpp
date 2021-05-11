#include <iostream>
#include <queue>
using namespace std;

//백준 2164 카드2

int main()
{
	int n;
	queue<int> q; // queue 생성
	cin >> n;

	for (int i = 1; i <= n; ++i) { // 1부터 n까지 queue에 넣음
		q.push(i);
	}

	while (q.size() > 1) { //queue의 원소 개수가 1이 될때까지
		q.pop(); //앞에거 뺌
		q.push(q.front()); //맨 앞에거 뒤에 넣음
		q.pop(); //맨 앞에거 뺌
	}
	// 왜 q.push(q.pop())이 안될까?.. 찾아보니까 pop은 리턴값이 없어서 안된대
	// 왜 없지? 왜 함수를 그렇게 만들었지? ;;;;
	// 난 제주도 간다 안녕
	cout << q.front();
}
