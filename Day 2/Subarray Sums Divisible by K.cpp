class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size(),ans = 0,pref = 0;
        vector<int> hsh(k);
        hsh[0]++;
        for(int i = 0; i < n; i++)
        {
            pref = (pref + nums[i])%k;
            if(pref < 0) pref += k;
            ans += hsh[pref];
            hsh[pref]++;
            
        }
        return ans;
        
    }
};
