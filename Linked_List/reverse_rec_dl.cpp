#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

void Insert(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    temp->prev = head;
    if(head != NULL){
        temp->next = head;
        return;
    }
    head = temp;

}

void Print(){
    Node* temp = head;
    while (temp != NULL)
    {
        cout <<temp->data<<" ";
        temp = temp->next;
    }
    
}

void Reverse(Node* p){

}

Node* head = NULL;

int main(){
    int arr[4]={1,2,3,4};
    for(int i=0; i<4;i++){
        Insert(arr[i]);
    }
    Print();
    Reverse(head);
    Print();

}