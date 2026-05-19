#include<iostream>
//space remover from string
using namespace std;
int main(){
    string str;
    string space ="";
    cout<<"Enter an String :";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i] != ' ')
        space+=str[i];
    }
    
    cout<<"String Without Space :"<<space;
    return 0;

}