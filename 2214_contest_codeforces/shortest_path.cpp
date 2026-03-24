#include <bits/stdc++.h>

using namespace std;

const int MAXIMUM_VAR = 1e9;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> distance(n, vector<int>(n, MAXIMUM_VAR));
    for(int i = 0; i<m; i++){
        int a, b, c;
        cin >> a >> b >> c;
        a--, b--;
        distance[a][b] = c;
        distance[b][a] = c;
    }
    for(int i = 0; i<n; i++){
        distance[i][i] = 0;
    }
    for(int i = 0; i<n; i++){
        for(int k = 0; k<n; k++){
            for(int j = 0; j<n; j++){
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
            }
        }
    }
    for(int i = 1; i<n; i++){
        if(distance[0][i] >= MAXIMUM_VAR){
            cout << "-1\n";
        } else {
            cout << distance[0][i] << "\n";
        }
    }
}