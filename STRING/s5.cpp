#include<iostream>
//check palandrom
using namespace std;
int main (){
    string str,rev;
    cout<<"Enter an string :";
    getline(cin,str);
    for(int i =str.length() -1;i>=0;i--){
        rev+=str[i];
    }
    if(str==rev)
        cout<<"String Is Palandrom";
        else
        cout<<"String Is Not A Palandrom";
    
    return 0;
}    