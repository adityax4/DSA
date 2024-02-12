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

int main(){
    vector<int> arr = {2,4,6,8,10,12};
    Node* head = convert2DLL(arr);
    head = deleteHead(head);
    head = deleteTail(head);
    head = deleteKth(head, 2);
    deleteNode(head->next);
    print(head);
}