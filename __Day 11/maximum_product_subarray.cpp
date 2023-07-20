class Solution {
public:
    int maxProduct(vector<int>& n) {
        int ans = n[0];
        int a = ans,b = ans;
    
        for(int i = 1; i < n.size(); i++)
        {
            if(n[i] < 0)
            {
                swap(a,b);
            }
            a = max(n[i],a*n[i]);
            b = min(n[i],b*n[i]);
            ans = max(ans,a);
        }
        return ans;
        
    }
};