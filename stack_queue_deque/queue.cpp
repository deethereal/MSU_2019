//
//  main.cpp
//  new_era
//
//  Created by denis  on 16.11.2019.
//  Copyright © 2019 denis . All rights reserved.
// This is watermark
//gh
#include <string>
#include <iostream>
using namespace std;
int size=0;
struct node{
    int data;
    node *pNext;
};
void push(node **tail,node **head,int data)
{
    node *current_node=new node();
    current_node->data=data;
    if (size==0)
    {
        *tail=current_node;
        *head=*tail;
    }
    else
    {
        (*tail)->pNext=current_node;
        *tail=current_node;
    }
    size++;
    cout<<"ok"<<endl;
}
int pop(node **head,node **tail)
{
    int popped=(*head)->data;
    node *temp=*head;
    *head=(*head)->pNext;
    free(temp);
    size--;
    return popped;
   
}
int front (node **head)
{
    return (*head)->data;
}
void clear(node **head)
{
    while(*head)
    {
        node* temp=*head;
        *head=(*head)->pNext;
        free(temp);
    }
    size=0;
    cout<<"ok"<<endl;
}
int main(){
    node *tail=NULL;
    node *head=NULL;
    string line;
    cin>>line;
    while (line!="exit")
    {
        if (line=="push")
        {
            int number;
            cin>>number;
            push(&tail,&head,number);
        }
        if (line=="pop"){
            if (size>0)
                cout<<pop(&head,&tail)<<endl;
            else
                cout<<"error"<<endl;
        }
        if (line=="size")
            cout<<size<<endl;
        if (line=="front"){
            if (size!=0)
                cout<<front(&head)<<endl;
            else
                cout<<"error"<<endl;
        }
        if (line=="clear")
            clear(&head);
        
        cin>>line;
    }
    cout<<"bye"<<endl;
    return 0;
}
