#include<iostream>
//vovel counter in string 
using namespace std;
int main (){
    string str;
    int count =0;
    cout<<"Enter an String :";
    getline(cin,str);
    for(int i = 0;i<= str.length();i++){
        char ch =tolower(str[i]);

    if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' )
    count++;    
    }
      
    

    cout<<"Vovels ="<<count;
    return 0;
}