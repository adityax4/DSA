#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* convertArrLL(vector<int>arr){
    Node* head = new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int lengthLL(Node* head){
    int cnt=0;
    Node* temp = head;
    while(temp){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

int checkIfPresent(Node* head, int k){
    Node* temp = head;
    while(temp){
        if(temp->data==k) return 1;
        temp=temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr={2,4,6,8,10,12};
    Node* head = convertArrLL(arr);
    Node* temp=head;
    while (temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    cout<<lengthLL(head)<<endl;
    cout<<checkIfPresent(head, 10);
}