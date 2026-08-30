#include<bits/stdc++.h>
using namespace std;
void Duplicates(char *input){
    int n = strlen(input);
    int i=0;
    for(int j=1;j<n;j++){
        if(input[j]!=input[i]){
            input[i+1] = input[j];
            i++;
        }
    }
    input[i+1] = '\0';
}
