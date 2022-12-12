
// class Solution {
// public:
//     int climbStairs(int n) {
//         if ( n == 0 ) return 0;
//         else if ( n == 1 ) return 1;
//         else if ( n == 2 ) return 2;
//         vector<int> step(n,0);
//         step[0]=1;
//         step[1]=2;
//         for(int i=2;i<n;i++)
//         {
//             step[i]=step[i-2]+step[i-1];
//         }
//         return step[n-1];
        
//         if(n==0)
//         {
//             return 0;
//         }
//         climbStairs(n+1,path+'1');
//         climbStairs(n+2,path+'2');
      
//     }
// };

// class Solution{
// public:
//     int climbStairs(int n){
        
//         if(n==0) return 1;
//         if(n==1) return 1;
      
//         int left=climbStairs(n-1);
//         int right=climbStairs(n-2);
        
//         return left+right;
//     }
// };

// class Solution{
// public:
//     int climbStairs(int n){
            
//         vector<int> dp(n+1,-1);    
        
//         if(n==0) return 1;
//         if(n==1) return 1;
//         if(dp[n]!=-1) return dp[n];
//         int left=climbStairs(n-1);
//         int right=climbStairs(n-2);
        
//         return dp[n]= left+right;
//     }
// };

class Solution{
public:
        int climbStairs(int n){
         if ( n == 0 ) return 0;
        else if ( n == 1 ) return 1;
        else if ( n == 2 ) return 2; 
        vector<int> step(n,0);
        step[0]=1;
        step[1]=2;
        for(int i=2;i<n;i++)
        {
            step[i]=step[i-2]+step[i-1];
        }
        return step[n-1];     
    }
};

// class Solution{
// public:
//     int climbStairs(int n){
//           if ( n == 0 ) return 0;
//         else if ( n == 1 ) return 1;
//         else if ( n == 2 ) return 2;  
//         int prev=1;
//         int prev2=2;
        
//         for(int i=2;i<n;i++)
//         {
//             int curr=prev2+prev;
            
//             prev2=prev;
//             prev=curr;
//         }
       
//         return prev;
//     }
// };