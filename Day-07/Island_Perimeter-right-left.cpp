class Solution {
    public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int perimeter = 0 , m = grid.size() , n = grid[0].size();
        
        for (int i = 0 ; i < m ; i++) 
        {
            for (int j = 0 ; j < n ; j++) 
            {
                if (grid[i][j] == 1) 
                {
                    perimeter += 4;
                    if (i < m - 1) 
                        perimeter -= 2 * grid[i + 1][j];
                    if (j < n - 1) 
                        perimeter -= 2 * grid[i][j + 1];
                }
            }
        }
        return perimeter;
    }
};
