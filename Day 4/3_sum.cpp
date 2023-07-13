class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        int n = nums.size();
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n - 2; i++)
        {
            int j = i+1,k = n-1;
            int val = 0 - nums[i];
              
            while(j < k)
            {
                if(nums[j] + nums[k] == val)
                {
                    while(i+1 < n-2 and nums[i] == nums[i+1])i++;
                    while(j < k-1 and nums[j] == nums[j+1])j++;
                    while(k-1 > j and nums[k] == nums[k-1])k--;
                    vector<int> tmp = {nums[i],nums[j],nums[k]};
                    j++,k--;
                    ans.push_back(tmp);
                }
                else if(nums[j] + nums[k] > val)
                {
                    k--;

                }
                else
                    j++;

            }
        }
       
        return ans;
        
    }
};


