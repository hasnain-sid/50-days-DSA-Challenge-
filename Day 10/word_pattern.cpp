class Solution {
public:


    bool wordPattern(string pattern, string s) {
        vector<string> vs;
        string t;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] != ' ')
            {
                t.push_back(s[i]);
            }
            else
            {
                vs.push_back(t);
                t.clear();
            }
        }
        vs.push_back(t);
        if(vs.size() != pattern.size()) return false;
        unordered_map<char,string> mp;
        unordered_map<string,int> freq;
        for(int i = 0; i < pattern.size(); i++)
        {
            if(mp.find(pattern[i]) != mp.end())
            {
                if(mp[pattern[i]] != vs[i])
                {
                    return false;
                }   
            }
            else
            {
                if(freq[vs[i]] > 0)
                    return false;
                mp[pattern[i]] = vs[i];
                freq[vs[i]]++;
            }
                
        }
    
        return true;

    }
};


