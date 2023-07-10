class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n = p.size(), ans = -1;
        int minm[n+2],maxm[n+2];
        minm[0] = p[0];
        maxm[n-1] = p[n-1];
        // cout << maxm[n-1] << endl;
        for(int i = 1; i < n; i++)
        {
            minm[i] = min(p[i], minm[i-1]);
        }
        for(int i = n-2; i >= 0; i--)
        {
            maxm[i] = max(maxm[i+1], p[i]);
        }
        for(int i = 0; i < n-1; i++)
        {
            ans = max(ans,maxm[i+1] - minm[i]);
        }
        if(ans <= 0) return 0;
        else return ans;

    }
};