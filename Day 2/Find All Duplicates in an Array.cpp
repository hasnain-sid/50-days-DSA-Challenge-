class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        
        int k = 0;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
                nums[k++] = nums[i-1];
        }
        nums.resize(k);
        return nums;
        
    }
};