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

Node* insertFirst(Node* head, int val){
    if(head==NULL) return new Node(val);
    Node* temp = new Node(val, head);
    return temp;
}

Node* insertLast(Node* head, int val){
    if(head==NULL) return new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode = new Node(val);
    temp->next=newNode;
    return head;
}

Node* insertAtNth(Node* head, int val, int n){
    if(head==NULL){
        if(n==1) return new Node(val);
        else return head;
    }
    if(n==1){
        Node* temp = new Node(val, head);
        return temp;
    }
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        if(cnt==n-1){
            Node* newNode= new Node(val, temp->next);
            temp->next=newNode;
            break;
        }
        temp=temp->next;
    }
    return head;
}

Node* insertAtElement(Node* head, int val, int el){
    if(head==NULL) return NULL;
    if(head->data==el) {
        return new Node(val,head);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        if(temp->next->data==el){
            Node* newNode= new Node(val, temp->next);
            temp->next=newNode;
            break;
        }
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

    head = insertFirst(head, 1);
    head = insertLast(head, 10);
    head= insertAtNth(head,5,4);
    head= insertAtElement(head,20,6);
    printLL(head);
}

