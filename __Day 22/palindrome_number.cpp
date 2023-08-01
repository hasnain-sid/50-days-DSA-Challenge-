class Solution {
public:
    bool isPalindrome(int x) {
        int xx=x;
        long long int rev=0;
        while(x!=0){
        int rem=x%10;
        
        rev=rev*10+rem;
        x=x/10;
        }
        if(rev!=xx || xx<0){
            return false;
        }else{
            return true;
        }
    }
};