class Solution {
public:
    int rootCount(vector<vector<int>>& edges, vector<vector<int>>& guesses, int k) {
        int n = edges.size() + 1;
        vector<vector<int>> adjList(n);
        for (auto& edge : edges) {
            int u = edge[0], v = edge[1];
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
        vector<bool> guessed(guesses.size());
        int ans = 0;
        for (int i = 0; i < n; i++) {
            fill(guessed.begin(), guessed.end(), false);
            int correct = 0;
            for (auto& guess : guesses) {
                int u = guess[0], v = guess[1];
                if (u == i && !guessed[v]) {
                    guessed[v] = true;
                    correct++;
                }
            }
            for (auto& v : adjList[i]) {
                if (!guessed[v]) {
                    guessed[v] = true;
                    correct++;
                }
            }
            if (correct >= k) {
                ans++;
            }
        }
        return ans;
    }
};
