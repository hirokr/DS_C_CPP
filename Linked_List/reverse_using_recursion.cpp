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

void Print(){
    Node* temp = head;
    cout << "List Is: ";
    while (temp != NULL)
    {
        cout<< temp->data<<' ';
        temp = temp->next;
    }
    cout<< endl;
}

void ReverseRecursion(Node* p){
    if(p->next == NULL){
        head = p;
        return;
    }
    ReverseRecursion(p->next);
    Node* q = p->next;
    q->next = p;
    p->next = NULL;
}

int main(){
    int arr[] = {1,2,3,4};
    for(int i =0; i<4; i++){
        Insert(arr[i]);
    }
    Print();
    ReverseRecursion(head);
    Print();
    return 0;
}