//
//  main.cpp
//  test
//
//  Created by denis  on 17.11.2019.
//  Copyright © 2019 denis . All rights reserved.
//

#include <iostream>
using namespace std;
int max_size=0;
bool balancee = true;
int countt=0;
struct node{
    node *pLeft;
    node *pRight;
    int data;
    int count=0;
};

node *stump(int value)  //cоздание верхушки дерева
{
    node *temp = new node();
    temp->data=value;
    temp->pLeft=NULL;
    temp->pRight=NULL;
    temp->count++;
    max_size=1;
    return temp;
}

node *searchInsert(node *root,int value) // вставка элемента
{
    int size=0;
    node *temp = root;
    node *prev;
    while (temp)
    {
        prev=temp;
        if (value<temp->data){
            size++;
            temp=temp->pLeft;
        }
        else
        {
            if (value>temp->data)
            {
                temp=temp->pRight;
                size++;
            }
            else
                if (value==temp->data)
                {
                    temp->count++;
                    return NULL;
                }
        }
    }
    node *leaf = new node();
    leaf->data=value;
    leaf->count++;
    leaf->pLeft=NULL;
    leaf->pRight=NULL;
    if (value>prev->data)
        prev->pRight=leaf;
    else
        prev->pLeft=leaf;
    size++;
    countt++;
    if (size>max_size)
        max_size=size;
    return leaf;
}
int pred_max(node *root) //предмаксимум
    {
        int pr_max;
        node *temp = root;
        node *prev=temp;
        if (temp->pRight)
        {
            while (temp->pRight)
            {
                prev=temp;
                temp=temp->pRight;
            }
            
            if (temp->pLeft)
            {
                temp=temp->pLeft;
            
                if (temp->pRight){
                    while (temp->pRight)
                        {
                            temp=temp->pRight;
                        }
                    pr_max=temp->data;
                }
                else
                    pr_max=temp->data;
            }
            else
                pr_max=prev->data;
            }
        else
        {
            temp=temp->pLeft;
            while (temp->pRight)
                {
                    temp=temp->pRight;
                }
            pr_max=temp->data;
        }
        return pr_max;
    }
void poshli(node* root) {  //вывод элементов по возростанию
    node*temp=root;
    if (temp) {
        poshli(temp->pLeft);
        cout<<temp->data<<endl;
        poshli(temp->pRight);
    }
}
void i_am_leaf ( node *root) //вывод листьев
{
    node *temp = root;
    if (temp) {
        i_am_leaf(temp->pLeft);
        if (!(temp->pLeft) && !(temp->pRight))
             cout<<temp->data<<endl;
         i_am_leaf(temp->pRight);
    }
}
void i_am_not_a_leaf( node *root)  //вывод ячеек с двумя детьми
{
    node *temp = root;
    if (temp) {
        i_am_not_a_leaf(temp->pLeft);
        if ((temp->pLeft) && (temp->pRight))
             cout<<temp->data<<endl;
         i_am_not_a_leaf(temp->pRight);
    }
}
void i_am_branch(node * root) // вывод ячеек ТОЛЬКО с одинм ребенком
{
    node * temp = root;
    if (temp)
    {
        i_am_branch(temp->pLeft);
        if ((!temp->pLeft && temp->pRight) || (!temp->pRight && temp->pLeft))
            cout<<temp->data<<endl;
        i_am_branch(temp->pRight);
    }
}

int check_height(node *root) //функция для проверки баланса
{
    node *temp=root;
    if (!temp)
        return 0;
    int left_child_height = check_height(temp->pLeft);
    if (left_child_height==-1)
        return -1;
    int right_child_height = check_height(temp->pRight);
    if (right_child_height == -1)
        return -1;
    int difference= abs(right_child_height-left_child_height);
    if (difference > 1)
        return -1;
    else
        return max(right_child_height,left_child_height)+1;
}
void is_balance(node *root) //проверка на баланс
{
    if (check_height(root) == -1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
void frequence(node *root) //частота
{
    node * temp = root;
    if (temp)
    {
        frequence(temp->pLeft);
        cout<<temp->data<<" "<<temp->count<<endl;
        frequence(temp->pRight);
    }
}
    int main()
{
    int value;
    cin>>value;
    node * root;
    if  (value!=0)
    {
        root = stump(value);
        countt++;
    }
    cin>>value;
    while (value!=0)
    {
    searchInsert(root,value);
    cin>>value;
    }
    frequence(root);
    return 0;
}
