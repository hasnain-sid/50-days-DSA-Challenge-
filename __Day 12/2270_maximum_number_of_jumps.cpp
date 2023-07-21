class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {  
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0); 
        int n = nums.size();
        vector<int> dp(n,0);
        dp[0] = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            for(int j = i-1; j >= 0; j--)
            {
                if(((nums[j] - nums[i]) <= target) and ((- nums[j] + nums[i]) <= target) ) 
                {
                    if(dp[j] > 0)
                     dp[i] = max(dp[i],dp[j] + 1);
                }
                   
            }
        }
        return (!dp[n-1] ? -1 : dp[n-1]-1);

    }
};
