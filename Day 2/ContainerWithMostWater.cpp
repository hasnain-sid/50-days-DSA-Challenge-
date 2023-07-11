class Solution {
public:
    int maxArea(vector<int>& h) {
         ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int n = h.size();
        int i = 0,j = n -1;
        int ans = 0;
        while(i < j)
        {
            if(h[i] < h[j])
            {
                ans = max(ans, (j-i)*h[i]);
                i++;
            }
            else
            {
                ans = max(ans, abs(j-i)*h[j]);
                j--;
            }
            
        }
        return ans;
    }
};