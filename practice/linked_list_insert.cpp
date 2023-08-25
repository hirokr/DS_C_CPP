#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = NULL;

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print(){
    Node* temp = head;
    cout<<"The List is: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
 
void Reverse(Node* nHead){
    Node* current = nHead;
    Node* next ;
    Node* prev = NULL;
    while(current != NULL){
        current = temp->next;
        temp = temp->next;
    }
    temp1->next = temp;
    head = temp1;
}

void ReverseRecursion(Node* newHead){
    if(newHead->next == NULL){
        head = newHead;
        return;
    }
    ReverseRecursion(newHead->next);
    Node* p = newHead->next;
    p->next = newHead;
    newHead->next = NULL;

}

void ReverseRecursionPrint(Node* n_head){
    if( n_head->next == NULL){ 
        cout<< n_head->data<<" ";
        return;
        };
    ReverseRecursionPrint(n_head->next);
    cout<<n_head->data<<" ";
    
}

int main(){
    int arr[4]={1,2,3,4};
    for(int i =0; i<4; i++){
        Insert(arr[i]);
    }    
    Print();
    cout<<endl;
    Reverse(head);
    cout<<endl;
    Print();
    return 0;
}


