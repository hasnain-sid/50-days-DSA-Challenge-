class Solution {
public:
    long long mod = 1000000007;
    vector<int> prevSmallerElement(vector<int> &h)
    {
        int n = h.size();
        stack<int> st; 
        st.push(-1);
        vector<int> ans;

        for(int i = 0; i < n; i++)
        {
            int curr = h[i];
            while(st.top() != -1 and h[st.top()] >= curr)
            {
                st.pop();
            }
            ans.push_back(st.top());
            st.push(i);
        }
        return ans;
    }
    vector<int> nextSmallerElement(vector<int> &h)
    {
        int n = h.size();
        stack<int> st; 
        st.push(-1);
        vector<int> ans;

        for(int i = n-1; i >= 0; i--)
        {
            int curr = h[i];
            while(st.top() != -1 and h[st.top()] > curr)
            {
                st.pop();
            }
            ans.push_back(st.top());
            st.push(i);
        }
        return ans;
    }
    long long modpow(long long  a, long long  b, long long m)
    {
        long long ans = 1;
        while (b)
        {
            if (b & 1)
                ans = (ans * a) % m;
            b /= 2;
            a = (a * a) % m;
        }
        return ans;
    }
    long long  modinv(long long k) { return modpow(k, mod- 2, mod); }
    long long mul(long long val)
    {
        val%=mod;
        return (((val%mod * (val+1)%mod)%mod)*modinv(2))%mod;
    }


    int sumSubarrayMins(vector<int>& h) {
        vector<int> pre = prevSmallerElement(h);
        vector<int> next = nextSmallerElement(h);
        reverse(next.begin(),next.end());
        long long ans = 0;
        for(int i = 0; i < h.size(); i++)
        {

            int left = pre[i];
            int right = next[i];
            cout << left << " " << right << endl;
            // if(left == -1) left = -1;
            if(right == -1) right = h.size();

            int total = (right - 1) - (left + 1) + 1;
            long long val1 = mul(total);
            long long val2 = mul(right-1-i);
            long long val3 = mul(i - (left+1));
            ans =( ans%mod + (h[i]*(val1%mod - ((val2%mod + val3%mod))%mod))%mod)%mod;
            
            ans%=mod;
            
            // cout << total << endl;

        }
        return ans%mod;
    }
};
