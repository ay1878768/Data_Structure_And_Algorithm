#include<bits/stdc++.h>
using namespace std;
int printSubArrays(vector<int>&v) {
  int sum=0;
  int maxsum=INT_MIN;
  for(int i=0;i<v.size();i++) {
    int start=i;
    for(int j=i;j<v.size();j++) {
      int end=j;
      sum=0;
      for(int k=start;k<=end;k++) {
        sum+=v[k];
      }
      if(sum>maxsum) {
        maxsum=sum;
      } 
    }
  }
  return maxsum;
}
long long maxSubarraySum(vector<int>v, int n){
        
        // Your code here
        int sum=0;
        int maxSum=INT_MIN;
        for(int i=0;i<n;i++) {
           if(sum<0) {
                sum=0;
            }
            sum+=v[i];
            // if(sum<arr[i]) {
            //     sum=arr[i];
            // }
           
            if(sum>maxSum) {
                maxSum=sum;
            }
        }
        
        return maxSum;
        
    }
int main() {
  vector<int>v{-10, -2, -3, -4};
  int n=v.size();
  int res=maxSubarraySum(v,n);
  cout << res;
  return 0;
}