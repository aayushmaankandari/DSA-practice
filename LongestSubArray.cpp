#include<bits/stdc++.h>
using namespace std;
int LongestSubArray(vector<int> &arr,int n,int k){
    int left = 0;
    int right = 0;
    int sum = 0;
    int maxLen = 0;
    while(right<n){
        sum += arr[right];
        while(left<=right && sum>k){
            sum -= arr[left];
            left++;
        }
        if(sum==k){
            maxLen = max(maxLen,right-left+1);
        }
        right++;
    }
    return maxLen;
}
int main(){
    vector<int> arr={1,2,3,1,1,1,1,4,2,3};
    int ans = LongestSubArray(arr,arr.size(),6);
    cout << "" << ans << endl;
    return 0;
}