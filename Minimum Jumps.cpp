//Given an array of integers where each element represents the max number of steps that can be made 
//forward from that element. Write a function to return the minimum number of jumps 
//to reach the end of the array (starting from the first element).
//If an element is 0, then cannot move through that element.
#include<bits/stdc++.h>
using namespace std;
int minJumps(int a[], int n){
    int step[n];
    if(n==0 || a[0]==0) {
		return -1;
    }
    step[0]=0;
    for(int i=1;i<n;i++) {
        step[i]=INT_MAX;
        for(int j=0;j<i;j++) {
            if(i<=(j+a[j]) && step[j]!=INT_MAX) {
                step[i]=min(step[i],step[j]+1);
                break;
            }
        }
    }
    if(step[n-1]==INT_MAX) {
		return -1;
    }
    else
        return step[n-1];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
            
        cout<<minJumps(arr, n)<<endl;
    }
    return 0;
}
