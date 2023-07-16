class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string tmp;
        int n = path.size();
        for(int i = 0; i < path.size(); i++)
        {
            tmp.clear();
            if(path[i] == '/')
            {
                continue;
            }
            else
            {
                while(i < n and path[i] != '/')
                {
                    tmp.push_back(path[i]);
                    i++;
                }
                if(tmp == ".")
                    continue;
                else if(tmp == "..")
                {
                    if(st.size()>0)
                        st.pop();
                }  
                else
                    st.push(tmp);
                
            }
        }
        tmp.clear();
        while(st.size()>0)
        {
            tmp = "/" + st.top() + tmp;
            st.pop();
        }
        if(tmp.size() == 0)
            tmp.push_back('/');
        return tmp;
    }
};

