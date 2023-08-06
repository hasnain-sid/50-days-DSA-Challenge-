#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    int i = 0,j = n-1;
    while(v[i] == i+1 and i < j)i++;
    while(v[j] == j+1 and j > i)j--;

    
    while(i < j)
    {
        if (v[i] == j+1 and v[j] == i+1)
        {
            i++;
            j--;
        }
        else
            break;
    }
    if(i>=j)
        cout << "YES\n";
    else
        cout << "NO\n";


    return 0;
}