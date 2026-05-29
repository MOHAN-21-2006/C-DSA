#include<iostream>
//Biggest element finder
using namespace std;

struct node{
    int data;
    node*next;
};
int main(){
    int max =0;
    node*head=new node();
    node*second= new node();
    node*third=new node();

    head->data = 10;
    head->next =second;

    second->data = 20;
    second->next =third;

    third->data = 30;
    third->next =NULL;

    node*temp=head;
    while(temp != NULL){
        if(temp->data > max )
        max =temp->data;
        temp =temp->next;
    }
    
    cout<<"Biggest Element In Linked list :"<<max<<endl;
    return 0;
}