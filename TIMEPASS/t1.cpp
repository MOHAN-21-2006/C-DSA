#include<iostream>
//SECOND LARGEST ELEMENT IN ARRAY
#include<climits>
using namespace std;
int main(){
    int largest =INT_MIN;
    int secondlargest=INT_MIN;
    int arr[]={-1,-23,45,2434};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        if(arr[i]>largest){
            secondlargest =largest;
            largest =arr[i];
        }else if(arr[i]>secondlargest){
            secondlargest = arr[i];
        }
        
    }
    cout<<"second largest element"<<secondlargest<<endl;
    return 0;
}