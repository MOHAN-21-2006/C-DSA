#include <iostream>
//delete last node  
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

    node*temp=head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    node*last=temp->next;
    temp->next =NULL;
    delete last;
    temp=head;

    while(temp != NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }



    return 0;
}
