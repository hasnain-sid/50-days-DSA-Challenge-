#include<bits/stdc++.h>

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

#define ll long long
#define pb push_back
#define all(_obj) _obj.begin(), _obj.end()
#define F first
#define S second
#define pll pair<ll, ll>
#define vll vector<ll>
const int N = 1e5 + 11, mod = 1e9 + 7;
ll arr[N];
ll max(ll a, ll b) { return ((a > b) ? a : b); }
ll min(ll a, ll b) { return ((a > b) ? b : a); }
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
void sol(void)
{
    ll n; cin >> n;
    vll v(n-1);
    ll req = 0;
    if(n%2 == 0)
        req = n/2 *(n+1);
    else
        req = (n+1)/2 * n;
    // cout << req << endl;
    ll copy = req;
    set<ll> st;
    for(int i = 1; i<= n; i++)st.insert(i);
    for (int i = 0; i < n-1; ++i)
    {
        /* code */cin >> v[i];
    }
    ll d=0,rem=-1;
    if(st.find(v[0]) != st.end()){
        st.erase(st.find(v[0]));
    }else{
        rem = v[0];
    }
    for (int i = 0; i < n-2; ++i)
    {
        d = v[i+1] - v[i];
        if(st.find(d) != st.end()) st.erase(st.find(d));
        else
        {
            if(rem == -1)
            {
                rem = d;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
        
    }
    ll sum = 0;
    for(auto it:st)sum+=it;

    if(sum == req - v[n-2])
    {
        cout << "YES\n"; 
    }
    else if(sum == rem)
    {
        cout << "YES\n"; 
    }
    else
        cout << "NO\n";

   
    
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
    int test;
    cin >> test;
    while (test--)
        sol();
}