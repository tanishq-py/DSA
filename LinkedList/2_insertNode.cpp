#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node *next;
    node(int x){
        val =x;
        next= NULL;
    }
};

node *insert(node *head, int var){
    node *ptr= new node(var);
    ptr->next=head;
    head=ptr;
    return head;
}

void print(node *head){
    node *ptr= head;
    while(ptr!=NULL){
        cout<<ptr->val<<" ";    
        ptr=ptr->next;
    }
}

int main(){
    node *head=NULL;
    head= insert(head,40);
    head= insert(head,41);
    head= insert(head,42);
    head= insert(head,43);
    print(head);

}
