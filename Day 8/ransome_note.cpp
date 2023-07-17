class Solution {
public:
    bool canConstruct(string r, string m) {
        unordered_map<int,int> mp;
        for(int i = 0; i < m.size(); i++)
        {
            mp[m[i]]++;
            
        }
        // mp[a] = 1
        // mp[b] = 1
        for(int i = 0; i < r.size(); i++)
        {
            // mp[r[i]]--;
            // mp[a] = 0
            // mp[a] = -1
            if(mp[r[i]] < 0) return false;
        }
        
        
        return true;
    }  
};