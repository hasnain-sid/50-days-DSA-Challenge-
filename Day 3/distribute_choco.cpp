#include<bits/stdc++.h>
using namespace std;

int main()
{

	int  arr[] = {7, 3, 2, 4, 9, 12, 56} , m = 3 ;
	int n = 7;
	sort(arr,arr+n);
	int i = 0,j = m-1;
	int minm_ans = INT_MAX;
	while(j < n)
	{
		minm_ans = min(minm_ans,arr[j] - arr[i]);
		i++;
		j++;
	}
	cout << minm_ans << endl;


	return 0;
}