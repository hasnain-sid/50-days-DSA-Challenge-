class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
       int ans = 0;
        vector<long long>mods(60,0);
        for(int i=0; i<time.size(); i++){
            mods[time[i]%60]+=1;
        }
        
        for(int i=1; i<30; i++){
            ans+= (long long)((long long)mods[i] * mods[60-i]);
        }
        ans += (long long)(mods[0]*(mods[0]-1))/2;
        ans += (long long)(mods[30]*(mods[30]-1))/2;
        return ans; 

    }
};