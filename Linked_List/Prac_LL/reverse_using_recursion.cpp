#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head= NULL;

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Reverse_recursion(Node* p){
    if(p->next == NULL){
        head = p;
        return;
    }
    Reverse_recursion(p->next);   
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

void reverseRecursion(Node* last){
    if(last->next == NULL){
        head = last;
        return;
    }
    reverseRecursion(last->next);
    Node* end = last->next;
    end->next = last;
    last->next = NULL; 
}

void Print(){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<< " ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,3,4};
    for(int i = 0; i<4; i++){
        Insert(arr[i]);
    }
    Print();
    // Reverse_recursion(head);
    reverseRecursion(head);
    Print();
}