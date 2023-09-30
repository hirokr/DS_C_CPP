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

void ReversePrint(Node* value){
    if (value == NULL) return; 
    ReversePrint(value->next);
    cout<<value->data<<" ";
}

int main(){
    int arr[] = {1,2,3,4};
    for(int i = 0; i<4; i++){
        Insert(arr[i]);
    }
    ReversePrint(head);
}