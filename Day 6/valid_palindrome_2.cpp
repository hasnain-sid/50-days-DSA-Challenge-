class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0,j = s.size()-1;

        int del = 0;
        while(i <= j)
        {
            if(s[i] == s[j])
            {
                i++,j--;

            }
            else if (s[i] == s[j-1])
            {
                j--;
                del++;
            }
            else if (s[i+1] == s[j])
            {
                i++;
                del++;
            }
            else
            {
                del++;
                i++;
            }

        }
        if(del < 2) return true;
        i = 0,j = s.size()-1;
        del = 0;
        while(i <= j)
        {
            if(s[i] == s[j])
            {
                i++,j--;

            }
            else if (s[i+1] == s[j])
            {
                i++;
                del++;
            }
            else if (s[i] == s[j-1])
            {
                j--;
                del++;
            }
            
            else
            {
                j--;
                del++;
            }
                

        }
        if(del < 2) return true;
        else return false;
        
    }
};



// aabca
// acbc
// a bccc