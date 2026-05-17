#include<iostream>
//sum of an array element 
int main(){
    int size;
    int sum =0;
    std ::cout <<"enter the size of an arry :";
    std ::cin >> size;
     int arr[size];
     std:: cout <<"Enter an element in array :\n ";
    for(int i=0;i<size;i++){
        std ::cin >>arr[i];
    }
    for(int i =0;i<size;i++)
    sum = sum + arr[i];//sum =0 lena hota hai 

    std:: cout<<"sum of array :" << sum ;
}
        
    
    


