#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pr pair<int,int>
#define add push_back

vector<int> graph[200005];
pr memo[200005];
int typeVal[200005];

void explore(int u, int parent) {

    if (graph[u].empty()) {
        memo[u] = {0,0};
        return;
    }

    memo[u] = {2e9, 2e9};

    for (auto v : graph[u]) {
        if (v == parent) continue;

        explore(v, u);

        pr temp = memo[v];

        if (typeVal[v] == 1) temp.first++;
        else if (typeVal[v] == 2) temp.second++;

        memo[u] = min(memo[u], temp);
    }
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tests;
    cin >> tests;

    while (tests--) {

        int nodes;
        cin >> nodes;

        for (int i = 1; i <= nodes; i++) {
            graph[i].clear();
        }

        for (int i = 2; i <= nodes; i++) {
            int parent;
            cin >> parent;
            graph[parent].add(i);
        }

        for (int i = 2; i <= nodes; i++) {
            cin >> typeVal[i];
        }

        explore(1, 0);

        int cur = 1;

        while (!graph[cur].empty()) {

            int nextNode = -1;

            for (auto child : graph[cur]) {

                pr temp = memo[child];

                if (typeVal[child] == 1) temp.first++;
                else if (typeVal[child] == 2) temp.second++;

                if (temp == memo[cur]) {
                    nextNode = child;
                    break;
                }
            }

            cur = nextNode;
        }

        cout << cur << "\n";
    }

    return 0;
}