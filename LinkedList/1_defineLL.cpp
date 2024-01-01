#include<bits/stdc++.h>
using namespace std;
class Node {
    public: 
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data= data1;
        next= nullptr;
    }

};

int main(){
    vector<int> arr= {2,5,6,7};
    Node* y= new Node(arr[0]);
    cout<<y->data;
    return 0;
}

//convert array to LL
Node* constructLL(vector<int>& arr) {
    if (arr.empty()) {
        return nullptr;  
    }
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for (int i = 1; i < arr.size(); ++i) {
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;  
}

//length of LL
int length(Node *head)
{
	  int cnt=0;
        Node* temp =head;
        while(temp){
            temp= temp->next;
            cnt++;
        }
        return cnt;
}


//search in LL
int searchInLinkedList(Node<int> *head, int k) {
    Node<int>*temp = head;
    while(temp){
        if(temp->data==k) return 1;
        temp= temp->next;
    }
    return 0;
}


