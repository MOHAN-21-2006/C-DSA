#include<iostream>
//take element input and print 
int main(){
    int size;
    std ::cout <<"enter the size of an arry :";
    std ::cin >> size;
     int arr[size];
     std:: cout <<"Enter an element in array :\n ";
    for(int i=0;i<size;i++){
        std ::cin >>arr[i];
    }
      std:: cout <<"the  array is :-\n ";
    for(int i=0;i<size;i++){
        std ::cout << arr[i] <<"\n";
    }

    
}