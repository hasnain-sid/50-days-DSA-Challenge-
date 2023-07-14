class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int val = 0,maxm = INT_MIN;
        for(auto it:mp)
        {
            if(it.second >= maxm)
            {
                maxm = it.second;
                val = it.first;
            }
        }
        return val;
        
    }
};