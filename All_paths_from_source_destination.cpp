class Solution {
public:
    void dfs(vector<vector<int>>graph,vector<vector<int>>&ans,vector<int>&path,int i) // i represents the current node of the graph
    {
        path.push_back(i);
        if(i==graph.size()-1)
        {
            ans.push_back(path);
        }else{
            for(auto it : graph[i])
            {
                dfs(graph,ans,path,it);
            }
        }
        path.pop_back();
        
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>path;
        dfs(graph,ans,path,0);
        return ans;
    }
};