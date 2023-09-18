#include<iostream>
#include<Stack>
#include<cstring>
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
    printf("The List: ");
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void Reverse_stack_print(){
    stack<Node*> S;
    Node* temp = head;
    while(temp != NULL){
        S.push(temp);
        temp = temp->next;
    }
    Node* top = NULL;
    cout<<"\nReverse: ";
    while(!S.empty()){
        top = S.top();
        cout<<top->data<<" ";
        S.pop();
    }
}

int main(){
    int arr[] = {1,2,3,4};
    for(int i = 0; i<4; i++){
        Insert(arr[i]);
    }
    Print();
    Reverse_stack_print();
}