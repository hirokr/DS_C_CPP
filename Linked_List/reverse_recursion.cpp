#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;      
};

struct Node* Insert(Node* head, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    return head; 

}

void ReversePrint(Node* head){
    if (head == NULL) return;
    ReversePrint(head->next);
    cout<< head->data<< ' ';
}

int main(){
    Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);
    ReversePrint(head);
}
