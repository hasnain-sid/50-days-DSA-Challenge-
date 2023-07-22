class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string p)
    {
        // Your code here
        int m = p.size();
        int n = s.size();
        int hsh[30] = {0};
        int k = 0,t = 0,cnt = 0;
        for(int i = 0; i < m; i++)
        {
            
            hsh[int(p[i]) - 96]++;
            if(hsh[int(p[i]) - 96] == 1 )cnt++;
          
        }
        int ans=0;
        int len = INT_MAX;
        int j = 0,i = 0;
        for(; i < n; i++)
        {
            hsh[int(s[i]) - 96]--;
            if(hsh[int(s[i]) - 96] == 0)
                cnt--;
            if(cnt == 0)
            {
                
                while(cnt == 0)
                {
                	if(i - j + 1 < len)
                	{
                		len = i - j + 1;
                		ans = j;
                	}
                	hsh[int(s[j]) -96]++;
            
                	if(hsh[int(s[j]) -96] == 1)
                	    cnt++;
                	j++;
                }
            }
        }
        if(len == INT_MAX)
        	return "-1";
        return s.substr(ans,len);
    }
};
