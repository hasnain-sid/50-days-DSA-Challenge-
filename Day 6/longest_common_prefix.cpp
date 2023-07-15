class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        sort(v.begin(),v.end());
        int n=v.size();
        string first=v[0],last=v[n-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]==last[i]){
                continue;
            }
            return first.substr(0,i);
        }
        return first;
    }
};