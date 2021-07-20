#include <iostream>
#include <set>

using namespace std;

// 백준 7662 이중 우선순위 큐
// multiset으로 푸는 게 더 편함

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    multiset<int> ms;
    int T, K, i, j, input, cnt;
    char c;

    cin >> T;
    for (i = 0; i < T; i++) {
        ms.clear();
        cin >> K;
        for (j = 0; j < K; j++) {
            cin >> c;
            cin >> input;
            if (c == 'I') {                
                ms.insert(input);
            }
            else if (c == 'D' && !ms.empty()) {
                if (input == 1) {
                    auto iter = ms.end();
                    iter--;
                    ms.erase(iter);
                }
                else if (input == -1) {
                    auto iter = ms.begin();
                    ms.erase(ms.begin());
                }
            }
        }

        if (ms.empty()) cout << "EMPTY" << endl;
        else {
            auto iter = ms.end();
            iter--;
            cout << *iter << ' ' << *ms.begin() << endl;
        }
    }
   
}
