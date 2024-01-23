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
    vector<int> arr = {2,3,5,8};
    Node* head=new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    cout<<head->next->data;
}