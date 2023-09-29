#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
}; 

Node* Insert(Node* head, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;
    return head;
}

void Print(Node* Head){
    while(Head != NULL){
        cout << Head->data << " ";
        Head = Head->next;
    }
}

int main(){
    Node* head = NULL;
    int arr[4] = {1,2,3,4};
    for(int i = 0; i < 4; i++){
        head = Insert(head, arr[i]);
    }
    Print(head);
}