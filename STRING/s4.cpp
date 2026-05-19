#include<iostream>
//reverse a string
using namespace std;
int main (){
    string str;
    cout<<"Enter a String :";
    getline(cin,str);
    cout<<"Reversed String :";
    for(int i =str.length()-1;i>=0;i--){
       cout<<str[i]; 
    }
    
    return 0;
}