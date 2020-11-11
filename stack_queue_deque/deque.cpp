//
//  main.cpp
//  test
//
//  Created by denis  on 17.11.2019.
//  Copyright © 2019 denis . All rights reserved.
//

#include <iostream>
using namespace std;
int size=0;
struct node{
    int data;
    node *pNext;
    node *pPrev;
};

string push_front(node **end,node**begin,int value)
{
    node *new_node= new node();
    new_node->data=value;
    if (size==0)
    {
        *end=new_node;
        *begin=new_node;
    }
    else
    {
        (*begin)->pNext=new_node;
        new_node->pPrev=*begin;
        *begin=new_node;
    }
    size++;
    return "ok";
}

string push_back (node **end,node**begin,int value)
{
    node *new_node= new node();
    new_node->data=value;
    if (size==0)
    {
        *end=new_node;
        *begin=new_node;
    }
    else{
        (*end)->pPrev=new_node;
        new_node->pNext=*end;
        *end=new_node;
    }
    size++;
    return "ok";
}

int pop_front(node **begin)
{
    node *temp=*begin;
    *begin=(*begin)->pPrev;
   if (size!=1)
       (*begin)->pNext=NULL;
    int popped=temp->data;
    free(temp);
    size--;
    return popped;
}

int pop_back(node **end)
{
    node *temp=*end;
    *end=(*end)->pNext;
    if (size!=1)
        (*end)->pPrev=NULL;
    int popped=temp->data;
    free(temp);
    size--;
    return popped;
}

int front(node **begin)
{
    return (*begin)->data;
}

int back(node **end)
{
    return (*end)->data;
}

void clear(node **head,node **tail)
{
    if (size>0)
    {while(*head)
      {
          node* temp=*head;
          *head=(*head)->pNext;
          free(temp);
      }
      size=0;
      *tail=NULL;
    }
      cout<<"ok"<<endl;
}



int main()
{
    node *end=NULL;
    node *begin=NULL;
    string line;
    cin>>line;
    while(line!="exit")
    {
        if (line=="push_front")
        {
            int value;
            cin>>value;
            cout<<push_front(&end, &begin,value)<<endl;
        }
        if (line=="push_back")
        {
            int value;
            cin>>value;
            cout<<push_back(&end, &begin,value)<<endl;
        }
        if (line=="pop_back")
            {
            if (size!=0)
                cout<<pop_back(&end)<<endl;
            else
                cout<<"error"<<endl;
            }
        if (line=="pop_front")
        {
        if (size!=0)
            cout<<pop_front(&begin)<<endl;
        else
            cout<<"error"<<endl;
        }
        if (line=="front")
        {
            if (size!=0)
                cout<<front(&begin)<<endl;
            else
                cout<<"error"<<endl;
        }
        if (line=="back")
        {
            if (size!=0)
                cout<<back(&end)<<endl;
            else
                cout<<"error"<<endl;
        }
        if (line=="clear")
            clear(&end,&begin);
        if (line=="size")
            cout<<size<<endl;
        cin>>line;
        
    }
    cout<<"bye"<<endl;
    return 0;
}
