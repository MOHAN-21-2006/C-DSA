#include<iostream>
//node counter
using namespace std;
struct node{
    int data;
    node* next;
};
int main(){
    int count =0;
    node* head = new node();
    node*second =new node();
    node*third =new node();

   head->data =10;
   head->next =second;

   second->data =20;
   second->next =third;

   third->data =30;
   third->next =NULL;

   node*temp = head;
   while(temp !=NULL ){
   temp=temp->next;
   count++;
   
   }
   cout<<"Total Node"<<count;
   return 0;
}