class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n =rooms.size();
        vector<int> vis(n,false);
        queue<int>q;
        q.push(0);
        while(!q.empty())
        {
            int curr=q.front();
            q.pop();
            vis[curr]=true;
            for(int it : rooms[curr])
            {
                if(!vis[it])
                    q.push(it);
            }
        }
        for(auto it : vis)
        {
            if(!it)
                return false;
        }
        return true;
    }
    
};