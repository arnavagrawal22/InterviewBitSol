vector < int > Solution::nearestHotel(vector < vector < int > > & A, vector < vector < int > > & B) {
    int n = A.size();
    int m = A[0].size();
    int inf = 1 << 30;
    int dis[n + 2][m + 2];
    for (int i = 0; i < n + 2; i++)
        for (int j = 0; j < m + 2; j++)
            dis[i][j] = 0;
    queue < pair < int, int >> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (A[i][j] == 0) {
                dis[i + 1][j + 1] = inf;
            } else {
                dis[i + 1][j + 1] = 0;
                q.push(make_pair(i + 1, j + 1));
            }
        }
    }
    while (!q.empty()) {
        pair curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;
        if (dis[x][y + 1] == inf) {
            dis[x][y + 1] = dis[x][y] + 1;
            q.push(make_pair(x, y + 1));
        }
        if (dis[x][y - 1] == inf) {
            dis[x][y - 1] = dis[x][y] + 1;
            q.push(make_pair(x, y - 1));
        }
        if (dis[x + 1][y] == inf) {
            dis[x + 1][y] = dis[x][y] + 1;
            q.push(make_pair(x + 1, y));
        }
        if (dis[x - 1][y] == inf) {
            dis[x - 1][y] = dis[x][y] + 1;
            q.push(make_pair(x - 1, y));
        }
    }
    vector < int > ans;
    for (int i = 0; i < B.size(); i++) {
        ans.push_back(dis[B[i][0]][B[i][1]]);
    }
    return ans;
}