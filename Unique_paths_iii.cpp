// class Solution {
// public:
//     void dfs(int i,int j,vector<vector<int>>& grid,int n,int m,int &count,int  counttilnow,int &ans)
//     {
//         if(i<0 || j<0 ||i>=n||j>=m) return;
//         if(grid[i][j]==-1) return;
//         if(grid[i][j]==2)
//         {
//             if(counttilnow-1==count)
//             {
//                 ans+=1;
//                 return;
//             }
//         }
//         grid[i][j]=-1;
//         vector<pair<int,int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
//         for(pair<int,int>p:dir)
//         {
//             int x=i+p.first;
//             int y=j+p.second;
            
//             if(x>=0 &&x<n&& y>=0 &&y<m)
//             {
//                 dfs(x,y,grid,n,m,count,counttilnow+1,ans);
//             }
//         }
//         grid[i][j]=0;
//     }
//     int uniquePathsIII(vector<vector<int>>& grid) {
//         int count=0;
//         int n=grid.size();
//         int m=grid[0].size();
        
//         int srcx;
//         int srcy;
        
//         for(int i=0;i<n;i++) // for finding source
//         {
//             for(int j=0;j<m;j++)
//             {
//                 if(grid[i][j]==0)
//                     count++;
//                 else if(grid[i][j]==1)
//                 {
//                     srcx=i;
//                     srcy=j;
//                 }
//             }
//         }
        
//         int ans=0;
//         int counttilnow=0;
//         dfs(srcx,srcy,grid,n,m,count,counttilnow,ans);
//         return ans;
//     }
// };

class Solution {
public:
    int res = 0, empty = 1;
    void dfs(vector<vector<int>>& grid, int x, int y, int count) {
        if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == -1) return;
        
        if (grid[x][y] == 2) {
            if(empty == count) res++; 
            return;
        }
        
        grid[x][y] = -1;
        
        dfs(grid, x+1, y, count+1);
        dfs(grid, x-1, y, count+1);
        dfs(grid, x, y+1, count+1);
        dfs(grid, x, y-1, count+1);
        
        grid[x][y] = 0;
        
    }
    
    int uniquePathsIII(vector<vector<int>>& grid) {
        int start_x, start_y;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) start_x = i, start_y = j;
                else if (grid[i][j] == 0) empty++;
            }
        }
        
        dfs(grid, start_x, start_y, 0);
        return res;
    }
};