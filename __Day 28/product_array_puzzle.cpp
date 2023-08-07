//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
        vector<long long int> ans(n);
        
        unordered_map<long long int,long long int> a;
        a[0] = 1;
        long long int pro = 1;
        for(int i = 1; i < n; i++)
        {
            a[i] = nums[i-1]*a[i-1];
        }
        for(int i = n-2; i >= 0; i--)
        {
            pro *= nums[i+1];
            ans[i] = a[i]*(pro);
        }
        ans[n-1] = a[n-1];
        return ans;
        //code here        
    }
};




//{ Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends