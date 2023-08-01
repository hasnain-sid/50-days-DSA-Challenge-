class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int s = nums.size();
        int sum = (s*(s+1) )/2;
        int curr_sum = accumulate(nums.begin(),nums.end(),0);

        return sum - curr_sum;
        
    }
};