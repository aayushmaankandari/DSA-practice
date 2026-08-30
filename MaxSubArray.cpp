#include<bits/stdc++.h>
using namespace std;
long long subArray(vector<int> arr ,int n){
    long long maxi = LLONG_MIN;
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        maxi = max(sum,maxi);
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}

int main()
{
    vector<int> arr = {-2,2,-3,-3,-5};
    cout << "Maximum Subarray sum " << subArray(arr,arr.size());
    return 0;
}