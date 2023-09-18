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

void Insert( int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
}

void Print(){
    Node* temp = head;
    printf("The list: ");
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void Reverse_LL_stack(){
    if(head == NULL) return; 
    stack<Node*> S;
    Node* temp = head;
    while(temp != NULL){
        S.push(temp);
        temp = temp->next;
    }
    temp = S.top();
    head = temp; 
    S.pop();
    while (!S.empty())
    {
        temp->next = S.top();
        S.pop();
        temp = temp->next;
    }
    temp->next = NULL;
};

int main(){
    int arr[] = {1,2,3,4,5};
    for(int i = 0; i<5; i++){
        Insert(arr[i]);
    }
    Reverse_LL_stack();
    Print();

}