#include<iostream>
//word counter in string sentence
using namespace std;
int main(){
    string str;
    int words =1;
    cout<<"Enter an Sentence :";
    getline(cin,str);
    for(int i =0;i<str.length();i++){
        if(str[i] ==' ')
    words++;
    }
    cout<<"Number of Words :"<<words;
    return 0;
}