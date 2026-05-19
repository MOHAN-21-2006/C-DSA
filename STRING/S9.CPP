#include<iostream>
//check string
using namespace std;
int main(){
    string str1,str2;
    cout<<"Enter an  fIRST String :";
    getline(cin,str1);
    cout<<"Enter an Second String :";
    getline(cin,str2);
    if(str1==str2)
    cout<<"String are Equal";
    else
    cout<<"String are not Equal";
    return 0;

}