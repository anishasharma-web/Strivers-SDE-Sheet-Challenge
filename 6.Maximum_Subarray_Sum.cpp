#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
 //Kadanes algorithm
 long long sum=0,maxi=LONG_LONG_MIN;
 for(int i=0;i<n;i++){
     sum=sum+arr[i];
     maxi=max(maxi,sum);
     if(sum<0) sum=0;
 }
 if(maxi<0)return 0;
 return maxi;
}
