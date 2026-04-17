#include <vector>
using namespace std;
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        struct Node{
            pair<int, int> pos;
        };

        vector<Node> islands;
        int i = 0, j = 0;
        while (i < grid.size()){
            while (j < grid[0].size()) {
                if (grid[i][j] == '1') {
                    Node n {{i, j}};
                    islands.push_back(n);
                }
            }
        }

        size_t Node_check = islands.end() - 1;
        while (check_Node != islands.front())
    }
};