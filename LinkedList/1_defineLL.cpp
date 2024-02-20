#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
    public:
    node(int data1, node *next1){
        data= data1;
        next = next1;
    }
    node(int data1){
        data=data1;
        next=NULL;
    }
};

int main(){
    vector<int> arr={2,5,4,6};
    node *y= new node(arr[0]);
    cout<<y<<endl;
    cout<<y->data<<endl;
}

