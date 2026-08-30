#include<bits/stdc++.h>
using namespace std;
vector<int> Leaders(vector<int> arr,int n){
    vector<int> leader;
    leader.push_back(arr[n-1]);
    int rightMax = arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]>rightMax){
            rightMax = arr[i];
            leader.push_back(arr[i]);
        }
    }
    return  leader;
}
int main(){
    vector<int> arr = {10,9,3,7,4};
    vector<int> leader = Leaders(arr,arr.size());
    reverse(leader.begin(),leader.end());
    for(auto it:leader){
        cout << " " << it;
    }
    return 0;
}
