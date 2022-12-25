class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& q) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        for(auto it : q)
        {
            int sum=0;
            int count=0;
            for(auto i: nums)
            {
                sum+=i;
                if(sum<=it)
                {
                    count++;
                }
            }
            res.push_back(count);
        }
        return res;
    }
};