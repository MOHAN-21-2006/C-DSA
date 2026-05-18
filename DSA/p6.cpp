#include<iostream>
//linear search in an array
int main () 
{
  int target = 2;
  int arr[5]={2,5,7,8,9};
  for(int i = 0;i<5;i++){
  if(arr[i] == target){
    std::cout<<"Element Pos :"<<i;
    return 0;
  } 
  }
  std::cout<<"Element NOt Found";
   return 0;
} // namespace 
