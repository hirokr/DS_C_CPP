#include<iostream>
using namespace std;

struct Node //creates a node of 8bits in the memory
{
    int data;
    Node* next;
};

void Print(Node* n_head){ // prints the data of the linked list
    Node* temp = n_head;
    cout << "list is: ";
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* Insert(Node* n_head, int n_data){ // inserts element in the first of the linked list
    Node* temp = new Node();
    temp->data = n_data;
    temp->next = n_head;
    n_head = temp;
    return n_head;
}

Node* N_Insert(Node* n_head, int data, int n){ //inserts data in the nth position of a 1 based linked list.
    Node* temp = new Node();
    temp->data = data;
    temp->next = NULL;

    Node* temp1 = n_head;
    for(int i=0; i<n-2; i++){
        temp1 = temp1->next;
    }
    temp->next = temp1->next;
    temp1->next = temp;
    return n_head;
}

Node* DeleteN(Node* n_head, int n){  //deletes nth node by cutting the connection and by freeing the memory. 
    if(n==1){
        return n_head->next;
    }
    Node* temp = n_head;
    for(int i=0; i<n-2; i++){
        temp = temp->next; 
    }
    Node* temp1 = temp->next;
    temp->next = temp1->next;
    delete temp1;
    return n_head;
}

void ReversePrint(Node* n_head){
    if( n_head == NULL) return;
    ReversePrint(n_head->next);
    cout<< n_head->data<<" ";
}

Node* ReverseRecursion(Node* n_head){
    if(n_head->next == NULL){
        return n_head ;
    }
    n_head = ReverseRecursion(n_head);
    Node* q = n_head->next;
    q->next = n_head;
    n_head->next = NULL;

}

int main(){
    Node* head = NULL; // the head of the linked list
    int arr[4] = {1,2,4,8};
    for(int i=0; i<4; i++){
        head = Insert(head, arr[i]);    
    }
    Print(head);
    head = N_Insert(head , 5, 5);
    Print(head);
    head = DeleteN(head, 4);
    Print(head);
    head = N_Insert(head, 1, 5);
    cout<< "Reversed List is: ";
    // ReversePrint(head);
    head = ReverseRecursion(head);
    cout<<endl;
    Print(head);
}