#include<iostream>
//sum of nodes
using namespace std;
struct node{
    int data;
    node* next;
};
int main(){
    int sum =0;
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
    sum=sum+temp->data;
   temp=temp->next;
   
   
   }
   cout<<"Total Sum :"<<sum;
   return 0;
}