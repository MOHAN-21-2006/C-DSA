#include <iostream>
//insert node at the middle 
using namespace std;

struct node {
    int data;
    node* next;
};
int main(){
    node*head=new node();
    node*second=new node();
    node*third=new node();

    head->data=10;
    head->next=second;

    second->data = 20;
    second->next =third;

    third->data = 30;
    third->next =NULL;

    node*newnode = new node();
    newnode->data = 5;
    newnode->next =third;

    second->next=newnode;
    node*temp=head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }

    return 0;
}
