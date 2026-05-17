#include<iostream>
//largest element in an array 
int main(){
    int max =0;
    int arr[5]={28,45,23,42,7};
    for(int i=0;i<5;i++)
    if(arr[i] > max){
        max = arr[i];
    }
    std::cout <<"largest element in an array :" << max;
    return 0;
}