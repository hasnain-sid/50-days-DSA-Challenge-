class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '(' or s[i] == '[' or s[i] == '{')
            {

                st.push(s[i]);
            }
            else
            {
                if(i==0 or st.size() == 0) return false;
                int t = st.size();
                if(st.size() != 0)
                {
                    if(s[i] == '}')
                    {
                        if(st.top() == '{')
                        st.pop();
                    }
                    else if(s[i] == ')')
                    {
                        if(st.top() == '(')
                        st.pop();
                    }
                    else if(s[i] == ']')
                    {
                        if(st.top() == '[')
                        st.pop();
                    }
                    if(t == st.size()) return false;
                    
                }

            }
        }
        if(st.size() == 0)
            return true;
        else
             return false;
    }





};