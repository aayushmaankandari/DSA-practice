#include<bits/stdc++.h>
using namespace std;
int SecondLargest(int arr[],int n){
    int largest = INT16_MIN;
    int slargest = INT16_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>=largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>slargest){
            slargest = arr[i];
        }
    }
    if(slargest ==  INT16_MIN){
        return -1;
    }
    return slargest;
    
}
int main(){
    int arr[6] = {5,2,7,10,3,5};
    cout << " " << SecondLargest(arr,6);
    return 0;
}