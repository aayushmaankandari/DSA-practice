#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> arr){
    int count = 0;
    int element;
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(count==0){
            count = 1;
            element = arr[i];
        }
        else if(arr[i]==element) count++;
        else{
            count--;
        }
    }
    int count1 = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==element) count1++;
    }
    if(count1>(n)/2) return element;
}
