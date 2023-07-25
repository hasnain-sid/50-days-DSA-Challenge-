class Solution {
public:
    int kp[5][4][5002];
    int mod = 1e9 + 7;
    int helper(int n,int i,int j)
    {
        
        if(i < 0 or i >= 4 or j < 0 or j >= 3 or (i == 3 and j == 0) or (i == 3 and j == 2))
        return 0;
        if(n==1)
        return 1;
        if(kp[i][j][n] != -1)
        return kp[i][j][n];
        int a = helper(n-1,i-2,j-1);
        a%=mod;
        int b = helper(n-1,i-2,j+1);
        int c = helper(n-1,i-1,j-2);
        int d = helper(n-1,i+1,j-2);
        int e = helper(n-1,i-1,j+2);
        int f = helper(n-1,i+1,j+2);
        int g = helper(n-1,i+2,j-1);
        int h = helper(n-1,i+2,j+1);
        b%=mod;c%=mod;d%=mod;e%=mod;f%=mod;g%=mod;h%=mod;
        int t = ((((((( a + b)%mod + c)%mod + d)%mod + e)%mod + f)%mod + g)%mod + h)%mod;
        t%=mod;
        return kp[i][j][n] = t ;
    }
    int knightDialer(int n) {
        if(n==1) return 10;
        long long ans = 0;
        memset(kp,-1,sizeof(kp));
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                long long val = helper(n,i,j);
                val%=mod;
                ans+=val;
                ans%=mod;
            }
        }
        return ans%mod;
    }
};

