#include<bits/stdc++.h>
using namespace std;
int UniqueElements(vector<int> v,int n){
    sort(v.begin(),v.end());
        int i=0;
    for(int j=1;j<n;j++){
        if(v[j]!=v[i]){
            v[i+1] = v[j];
            i++;
        }
    }
    cout << "" << i+1;

}

int main()
{
   vector<int> v= {1,2,1,1,1,6,3,3,2,5,1};
    UniqueElements(v,11);
    return 0;
}