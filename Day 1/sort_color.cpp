class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
       
        int one = 0,zero = 0,two = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == 0)
                zero++;
            else if(nums[i] == 1)
                one++;
            else
                two++;
        }
        int k = 0;
        while(zero--)
            nums[k++] = 0;
        while(one--)
            nums[k++] = 1;
        while(two--)
            nums[k++] = 2;
            
        
    }
};

