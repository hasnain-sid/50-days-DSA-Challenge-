class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
        unordered_map<string,vector<string>> ans;
        for(int i = 0; i < str.size(); i++)
        {
            string t = str[i];   
            sort(t.begin(),t.end());
            ans[t].push_back(str[i]);

        }
        vector<vector<string>> xo;
        for(auto it:ans)
        {
            xo.push_back(it.second);
        }
        return xo;
    }
};