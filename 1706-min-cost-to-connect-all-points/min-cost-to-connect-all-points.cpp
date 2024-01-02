class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        vector<bool> visited(points.size(), false);
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        pq.push({0, 0});
        int sum = 0;
        while (!pq.empty())
        {
            int wt = pq.top().first;
            int node = pq.top().second;
            pq.pop();

            if (!visited[node])
            {
                visited[node] = true;
                sum += wt;
                for (int i = 0; i < points.size(); i++)
                {
                    if (!visited[i])
                    {
                        int dist = abs(points[i][1] - points[node][1]) + abs(points[i][0] - points[node][0]);
                        pq.push({dist, i});
                    }
                }
            }
        }
        return sum;
    }
};