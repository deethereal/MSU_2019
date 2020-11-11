//
//  main.cpp
//  new_era
//
//  Created by denis  on 31.10.2019.
//  Copyright © 2019 denis . All rights reserved.
// This is watermark
//gh
#include <string>
#include <iostream>
using namespace std;
int size=0;
struct node{
    node *pNext;
    int data;
};
void push(node **head, int data)
{
    node *new_node= new node();
    new_node->data=data;
    //cout<<new_node->data<<endl;
    if (head==NULL)
        *head=new_node;
    else
    {
        new_node->pNext=*head;
        *head=new_node;
    }
    size++;
    cout<<"ok"<<endl;
}
int pop(node **head)
{
    int popped=-1100110011;
    if (size>0)
    {
    node* temp=*head;
    *head=(*head)->pNext;
    popped=temp->data;
    free(temp);
    size--;
    }
    return popped;
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
int back(node**head)
{
    int temp=-1100110011;
    if (size>0)
        temp=(*head)->data;
    return temp;
}

int main(){
    node *head=NULL;
    string line;
    getline(cin,line);
    while (line!="exit")
    {
        if (line[0]=='p' && line[1]=='u')
        {
            int number=0,i=5,f=1;
            if (line[5]=='-')
            {
                i++;
                f=-1;
            }
            while (i<line.length())
            {
                number=number*10+(line[i]-'0');
                i++;
            }
            number*=f;
            push(&head,number);
        }
        if (line[0]=='p' && line[1]=='o')
        {
            int otv=pop(&head);
            if (otv!=-1100110011)
                cout<<otv<<endl;
            else
                cout<<"error"<<endl;
        }
        if (line=="size")
            cout<<size<<endl;
        if (line[0]=='b'){
            int otv_b=back(&head);
            if (otv_b!=-1100110011)
                cout<<otv_b<<endl;
            else
                cout<<"error"<<endl;
        }
        if (line[0]=='c')
            clear(&head);
        getline(cin,line);
    }
    cout<<"bye"<<endl;
    return 0;
}
