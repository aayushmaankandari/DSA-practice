// Left rotate by one
#include<bits/stdc++.h>
using namespace std;
void LeftRotateByOne(vector<int> &arr,int n){
    int temp = arr[0];
    int temp2 = arr[1];
    for(int i=2;i<n;i++){
        arr[i-2] = arr[i];
    }
    arr[n-1] = temp;
    arr[n-2] = temp2;
}
int main(){
    vector<int> arr= {3,4,2,7,10};
    LeftRotateByOne(arr,arr.size());
    for(auto it:arr){
        cout << it << " ";
    }
    return 0;
}