#include<iostream>
//convert string into lower case
using namespace std;
int main(){
    string str;
    cout<<"Enter an String :";
    getline(cin,str);
    for(int i=0;i<=str.length();i++)
    str[i]=tolower(str[i]);
    cout<<"Converted String :"<<str;
    return 0;

}