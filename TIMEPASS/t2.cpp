#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,-23,65,24,};
    int n=sizeof(arr)/sizeof(arr[0]);
    int minimum= INT_MAX;
    int maximum =INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maximum)
        maximum= arr[i];
        
        if(arr[i]<minimum)
        minimum = arr[i];
    }

    cout<<minimum;
    cout<<maximum;
    return 0;

}