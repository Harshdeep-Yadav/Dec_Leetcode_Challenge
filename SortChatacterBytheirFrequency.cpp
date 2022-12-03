class Solution {
public:
    string frequencySort(string s) {
        int n =s.size();
        map<char,int>mp;
        string res="";
        for(auto it : s)
        {
             mp[it]++;   
        }
        priority_queue<pair<int,char>>pq;
        for(auto it : mp)
        {
            pq.push({it.second,it.first});    
        }
        while(!pq.empty())
        {
            int k=pq.top().first;
            while(k--)
            {
                res.push_back(pq.top().second);
            }
            pq.pop();
        }
        return res;
    }
};