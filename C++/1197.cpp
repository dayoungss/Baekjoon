#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 백준 1197 최소 스패닝 트리

int parent[10001];
vector <pair<int, pair<int, int>>> edge;

int find(int x) {
    if (parent[x] == x) return x;
    else return parent[x] = find(parent[x]);
}

void Union(int x, int y)
{
    x = find(x);
    y = find(y);

    if (x != y) parent[y] = x;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int V, E;
    int a, b, w, i, sum=0;

    cin >> V >> E;

    for (i = 0; i < E; i++) {
        cin >> a >> b >> w;
        edge.push_back(make_pair(w, make_pair(a, b)));
    }
    sort(edge.begin(), edge.end());

    for (i = 1; i <= V; i++) {
        parent[i] = i;
    }

    for (i = 0; i < E; i++) {
        int a = edge[i].second.first;
        int b = edge[i].second.second;
        if (find(a) != find(b)) {
            Union(a, b);
            sum += edge[i].first;
        }        
    }
    cout << sum << endl;
}