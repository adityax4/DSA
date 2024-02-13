#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* convert2DLL(vector<int> arr){
    Node* head= new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}

void print(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* deleteHead(Node* head){
    if(head==NULL||head->next==NULL) return NULL;
    Node* prev=head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;
}

Node* deleteTail(Node* head){
    if(head==NULL||head->next==NULL) return NULL;
    Node* tail=head;
    while (tail->next!=NULL)
    {
        tail=tail->next;
    }
    Node* newTail = tail->back;
    newTail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}

Node* deleteKth(Node* head, int k){
    if(head==NULL) return NULL;
    Node* temp = head;
    int cnt=0;
    while (temp!=NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;
    if(prev==NULL&&front==NULL){
        return NULL; 
    }
    else if(front==NULL){
        return deleteTail(head);
    }
    else if(prev==NULL){
        return deleteHead(head);
    }
    prev->next=front;
    front->back=prev;
    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}

void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front==NULL){
        prev->next==nullptr;
        temp->back=nullptr;
        free(temp);
        return;
    }
    prev->next=front;
    front->back=prev;

    temp->next=temp->back=nullptr;
    free(temp);
}

Node* insertB4Head(Node* head, int val){
    Node* newNode= new Node(val,head,nullptr);
    head->back=newNode;
    return newNode;
}

Node* insertB4Tail(Node*head, int val){
    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}

Node* insertB4Kth(Node* head, int k, int val){
    if(k==1){
        return insertB4Head(head, val);
    }
    int cnt=0;
    Node* temp = head;
    while (temp!=NULL)
    {
        cnt++;
        if(cnt==k) break;
        temp=temp->next;
    }
    Node* prev = temp->back;
    Node* newNode = new Node(val,temp,prev);
    prev->next=newNode;
    temp->back=newNode;
    return head;
}

void insertB4Node(Node* node, int val){
    Node* prev = node->back;
    Node* newNode = new Node(val, node, prev);
    prev->next=newNode;
    node->back=newNode;
    return;
}

int main(){
    vector<int> arr = {2,4,6,8,10,12};
    Node* head = convert2DLL(arr);

    head = deleteHead(head);
    head = deleteTail(head);
    head = deleteKth(head, 2);
    deleteNode(head->next);

    head = insertB4Head(head, 20);
    head = insertB4Tail(head, 16);
    head = insertB4Kth(head, 4, 22);
    insertB4Node(head->next, 100);
    
    print(head);
}