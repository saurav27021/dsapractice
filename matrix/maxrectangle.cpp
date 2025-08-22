// leetcode problem number 3195 - https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/description/
class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int minr = n, maxr = -1, minc = m, maxc = -1;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (grid[i][j] == 1) {
                    if (i < minr) minr = i;
                    if (i > maxr) maxr = i;
                    if (j < minc) minc = j;
                    if (j > maxc) maxc = j;
                }
        return (maxr - minr + 1) * (maxc - minc + 1);
    }
};
