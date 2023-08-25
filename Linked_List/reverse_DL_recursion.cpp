#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;

};

Node* Insert(Node* head, int x){
    Node* temp = new Node(); 
    temp->data = x;
    temp->next = NULL;
    temp->prev = head;
    if(head != NULL){
        temp->next = head;  
    }
    head = temp;
    return head;

}

void Print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data<< " ";
        temp = temp->next;
    }
}

Node* reverseRecursion(Node* head){
    if (head->next == NULL){
        return head;
    }
    
}

int main(){
    Node* head = NULL;

    int arr[4]={1,2,3,4};

    for(int i=0; i<4; i++){
        head = Insert(head, arr[i]);
    }
    Print(head);

    return 0;
}