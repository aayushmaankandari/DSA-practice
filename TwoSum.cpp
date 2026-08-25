#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> twoSum(vector<int> arr,int target,int n){
    int low = 0;
    int high = n-1;
    vector<pair<int,int>> ans;
    while(low<=high){
        int sum = arr[low]+arr[high];
        if(sum>target) high--;
        else if(sum<target) low++;
        else{
            ans.push_back({arr[low],arr[high]});
            low++;
            high--;
        }
    }
    if(ans.empty()){
        ans.push_back({-1,-1});
    }
    return ans;
}
    int main(){
    vector<int> arr = {3,5,7,2,5,4};

    vector<pair<int,int>> ans = twoSum(arr,12,6);

    for(auto p : ans){
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}