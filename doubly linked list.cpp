#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
}*head,*newnode,*temp;
int main()
{
    int choice=1;
    head=0;
    while(choice)
    {
        newnode=(node*)malloc(sizeof(struct node));
        cout<<"enter data\n";
        cin>>newnode->data;
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        cout<<"do you want to continue\n";
        cin>>choice;
    }
    temp=head;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    

}