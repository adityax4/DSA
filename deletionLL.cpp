#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next=nullptr;
    }
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }
};

Node* lL(vector<int>arr){
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

void printLL(Node* head){
    Node* temp= head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

Node* deleteFirst(Node* head){
    if(head==NULL){
        return head;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deleteLast(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* temp= head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

Node* deleteNth(Node* head, int n){
    if(head==NULL){
        return head;
    }
    if(n==1){
        Node* temp= head;
        head=head->next;
        delete temp;
        return head;
    }
    int cnt=0;
    Node* prev=NULL;
    Node* temp=head;
    
    while(temp){
        cnt++;
        if(cnt==n){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

Node* deleteVal(Node* head, int val){
    if(head==NULL){
        return head;
    }
    if(head->data==val){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* temp= head;
    Node* prev=NULL;
    while(temp){
        if(temp->data==val){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

int main(){
    vector<int> arr;
    int num;
    while (cin >> num) {
        arr.push_back(num);
    }
    Node* head = lL(arr);

    head=deleteFirst(head);
    head=deleteLast(head);
    head=deleteNth(head, 4);
    head = deleteVal(head,12);
    printLL(head);
}