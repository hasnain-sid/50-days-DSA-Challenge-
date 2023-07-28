class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        stack<int> st;
        unordered_map<int,int> mp;
        nums2.push_back(-1);
        for(int i = 0; i < nums2.size(); i++)
        {
            mp[nums2[i]] = i;
        }
        for(int i = 0; i < nums1.size(); i++)
        {
            int val = nums1[i];
            int ind = mp[val]+1;
            bool f = false;
            while(ind < nums2.size())
            {
                st.push(nums2[ind]);
                ind++;
                if(st.top() > val)
                {
                    ans.push_back(st.top());
                    f = true;
                    break;
                }
            }
            if(!f)
            {
                while(st.size() > 0 and st.top() < val)
                    st.pop();
                if(st.size() > 0)
                    ans.push_back(st.top());
                else
                    ans.push_back(-1);
            }
            while(st.size() != 0 )
                    st.pop();
        }
        return ans;
    }
};