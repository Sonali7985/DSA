#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
}
Node *GetNewNode(int data){
    Node* P=new Node();
    P->data=data;
    P->next=NULL;
    P->prev=NULL;
    return P;
}
if(front!=null){
    front->prev=P;
}
else{
    rear=P;
}

void InsFront(int data){
    Node* P=GetNewNode(data);
    if(front==NULL){
        front=P;
        rear=P;
        return;
    }
    P->next=front;
    front->prev=P;
    front=P;
}
void InsRear(int data){
    Node* P=GetNewNode(data);
    if(rear==NULL){
        rear=P;
        front=P;
        return;
    }
    rear->next=P;
    P->prev=rear;
    rear=P;
}


};