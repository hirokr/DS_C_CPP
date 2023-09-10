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

void Print(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
}

Node* Reverse_recursion(Node* Head){
    Node* temp = Head;
    if(temp == NULL){
        cout<<'h';
        return Head;    ;
    }
    Head = Reverse_recursion(temp->next);
}

int main(){
    Node* head = NULL;

    int arr[] = {1,2,3,4};
    for(int i = 0; i<4; i++){
        head = Insert(head, arr[i]);
    }
    head = Reverse_recursion(head);
    Print(head);
}