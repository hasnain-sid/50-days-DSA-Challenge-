class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        sort(nums.begin(),nums.end());
        for(auto it:nums)
            cout << it << " ";
        int i = 1;
        if(nums[i] != nums[i-1])
            return nums[i-1];
        while(i < n-1)
        {
            if(nums[i] == nums[i-1] or nums[i] == nums[i+1])  i++;
            else return nums[i];
        }
        return nums[n-1];
    }
};