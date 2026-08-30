#include<bits/stdc++.h>
using namespace std;
vector<int> Merging(vector<int> a,vector<int> b){
    int n1=a.size();
    int n2= b.size();
    int i=0;
    int j=0;
    vector<int> temp;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(temp.size()==0 || temp.back()!=a[i]){
                temp.push_back(a[i]);
            }
             i++;
        }
        else{
            if(temp.size()==0 || temp.back()!=b[j]){
                temp.push_back(b[j]);
            }
            j++;
        }
    }
    while(j<n2){
        if(temp.size()==0 || temp.back()!=b[j]){
                temp.push_back(b[j]);
            }
            j++;
    }
    while(i<n1){
        if(temp.size()==0 || temp.back()!=a[i]){
                temp.push_back(a[i]);
    }
    i++;
    return temp;
}
}
int main(){
    vector<int> a = {11,13,32,54,67};
    vector<int> b = {13,54,98};
    vector<int> merged = Merging(a,b);
     for(auto it:merged){
        cout << it << " ";
    }
    return 0;
}