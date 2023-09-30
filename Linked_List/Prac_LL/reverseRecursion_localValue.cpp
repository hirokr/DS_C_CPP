/*
Incomplete Reverse Recursion
*/
#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
};
void Print(Node* head){
    while (head != NULL)
    {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node* Insert(Node* newHead, int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = newHead;
    newHead = temp;
    return newHead;
}

Node* Reverse_Recursion(Node* loc){
    if(loc->next == NULL){
        return loc;
    }
    loc = Reverse_Recursion(loc->next);
    Node* last = loc->next;
    last->next = loc;
    loc->next = NULL;
    // return last;
}

int main(){
    Node* head = NULL;
    int arr[] = {1,2,3,4};
    for(int i = 0; i<4; i++){
        head = Insert(head, arr[i]);
    }
    Print(head);
    head = Reverse_Recursion(head);
    Print(head);
}