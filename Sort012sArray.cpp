#include<bits/stdc++.h>
using namespace std;
void Sort(int arr[],int n){
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }

}
int main(){
    int arr[8] = {1,0,0,2,1,2,1,2};
    Sort(arr,8);
    for(int i=0;i<8;i++){
        cout << arr[i] << " ";
    }
    return 0;
}