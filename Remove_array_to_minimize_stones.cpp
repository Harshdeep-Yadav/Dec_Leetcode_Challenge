class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(auto it : piles)
        {
            pq.push(it++);
        }
        int sum=accumulate(piles.begin(),piles.end(),0);
        for(int i=0;i<k;i++)
        {
            int x=pq.top();
            pq.pop();
            int floor=x/2;
            sum-=floor;
            pq.push(x-floor);
        }
        return sum;
    }
};