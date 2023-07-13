class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        long long int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(long long int i = 0; i < n-3; i++)
        {
            long long int req = target - nums[i];
            for(long long int j = i+1; j < n-2; j++)
            {
                long long int val = req - nums[j];
                long long int k = j+1,l = n-1;
                while(k < l)
                {
                    if(nums[k] + nums[l] == val)
                    {
                        while(i+1 < n and nums[i] == nums[i+1])i++;
                        while(j+1 < n and nums[j] == nums[j+1])j++;
                        while(k+1 < n and nums[k] == nums[k+1])k++;
                        vector<int> tmp = {nums[i],nums[j],nums[k],nums[l]};
                        k++,l--;
                        ans.push_back(tmp);
                    }
                    else if(nums[l] + nums[k] > val)
                    {
                        l--;
                    }
                    else
                        k++;

                }
            }
        }
        return ans;

 
    }
};