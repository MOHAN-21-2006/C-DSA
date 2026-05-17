#include<iostream>
//smallest element in an array 

int main (){
    int min ;
    int arr[5]={28,45,23,42,7};
    for(int i=0;i<5;i++)
    if(arr[i] < min){
        min = arr[i];
    }
    std::cout <<"largest element in an array :" << min;
    return 0;
}