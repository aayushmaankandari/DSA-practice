#include<bits/stdc++.h>
using namespace std;
int LongestConsecutiveSeq(vector<int> &arr,int n){
    int longest = 1;
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1)!=st.end()){
                x = x+1;
                count++;
            }
            longest = max(longest,count);
        }
    }
    return longest;
}