class Solution {
public:
    int reverse(int x) {
        if(abs(x) >= INT_MAX)
        {
            return 0;
        }
        long long int rev=0;
     while(x!=0){
         long long int r=x%10;
         rev=rev*10+r;
         x=x/10;
     }   
        if(abs(rev) >= INT_MAX)
        {
            return 0;
        }
     return rev;
    }
};