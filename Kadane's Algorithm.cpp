/*Given an array arr of N integers. Find the contiguous sub-array with maximum sum.*/
#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
    int global_max=arr[0],local_max=arr[0];
    for(int i=1;i<n;i++) {
    	if(local_max<0)
            local_max=0;
        local_max+=arr[i];
        global_max=max(global_max,local_max);
        
    }
    return global_max;
}int main()
{
    int t,n;
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
    	cin>>n; //input size of array
		int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout << maxSubarraySum(a,n)<<endl;
    }
}
