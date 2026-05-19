#include<iostream>
//convert string into uppercase
using namespace std;
int main(){
    string str;
    cout<<"Enter an String :";
    getline(cin,str);
    for(int i=0;i<=str.length();i++)
    str[i]=toupper(str[i]);
    cout<<"Converted String :"<<str;
    return 0;

}