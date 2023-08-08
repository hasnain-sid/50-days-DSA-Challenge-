class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int st = 0,ed = n-1;
        
        int mid = 0;
        while(st < ed)
        {
            mid = (st + (ed - st)/2);
            if(nums[mid] > nums[mid+1])
            {
                ed = mid;
            }
            else
            {
                st = mid+1;
            }

        }
        return st;
    }
};
