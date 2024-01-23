#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data=data1;
        next= nullptr;
    }
};

int main(){
    vector<int> arr = {22,31,50,84};
    Node* head=new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    Node* temp1 = head;
    while (temp1)
    {
        cout<<temp1->data<<" ";
        temp1=temp1->next;
    }
}


