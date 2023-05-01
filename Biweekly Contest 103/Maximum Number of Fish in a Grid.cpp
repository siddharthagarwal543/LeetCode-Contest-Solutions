class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>&grid)
    {
        if(i>=grid.size()||i<0||j>=grid[0].size()||j<0||grid[i][j]==0)
           return 0;
        int ans=grid[i][j];
            grid[i][j]=0; //marking the current cell visited
        return ans+dfs(i-1,j,grid)+dfs(i+1,j,grid)+dfs(i,j-1,grid)+dfs(i,j+1,grid);//checking for all the adjacent cells
    }
    int findMaxFish(vector<vector<int>>& grid) {
       int r=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                r=max(r,dfs(i,j,grid));
            }
        }
        return r;
    }
};