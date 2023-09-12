//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        stack<int>T;
        
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='+'||S[i]=='-'||S[i]=='*'||S[i]=='/')
            {
                if(S[i]=='+')
                {
                    int a = T.top();  T.pop();
                    int b = T.top();  T.pop();
                    T.push(a+b);
                    
                }
                if(S[i]=='-')
                {
                      int a = T.top();  T.pop();
                    int b = T.top();  T.pop();
                    T.push(b-a);
                    
                }
                if(S[i]=='*')
                {
                   int a = T.top();  T.pop();
                    int b = T.top();  T.pop();
                    T.push(a*b);
                    
                    
                }
                if(S[i]=='/')
                {
                    int a = T.top();  T.pop();
                    int b = T.top();  T.pop();
                    T.push(b/a);
                    
                    
                }
                
            }
            else
            {
                
                T.push(S[i]-'0');
            }
        }
        
        int res =T.top();
        
        return res;
    }
};


//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends