#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int left = 0;
    int right = s.size()-1;
    while(left<right){
        if(s[left]!=s[right]){
            cout << "FALSE ";
        }
        left++;
        right--;
    }
    cout << "TRUE";
    return 0;
}