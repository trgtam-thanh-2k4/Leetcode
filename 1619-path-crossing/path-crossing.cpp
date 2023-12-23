class Solution {
public:
    bool isPathCrossing(string path) {
        vector<pair<int, int>> visited;
        int x = 0;
        int y = 0;
        visited.push_back({x, y});

        for (auto c:path)
        {
            if (c == 'N') x++;
            else if (c == 'S') x--;
            else if (c == 'E') y++;
            else if (c == 'W') y--;
            visited.push_back({x, y});
        }
        set<pair<int,int>>st(visited.begin(),visited.end());
        if(visited.size()==st.size())return false;
        else return true;
    }
};