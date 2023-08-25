#include<iostream>
using namespace std;

struct Node // creates a location in the memory. With a data and space for location.
{
    int data;
    struct Node* next;    
};

Node* head ; // Allocates Node type memory  

void Insert(int new_date){  //inserts a value in the first of the linked list.
    Node* temp = new Node;
    // cout << temp<< " "<< temp->next <<" ";
    temp ->data = new_date;
    temp ->next = NULL; 
    if(head != NULL){
        temp ->next = head;}
    head = temp;
    // cout << head<<" "<<head->next<<endl; 
}

void Print(){
    Node* temp = head;
    cout << "list is: "<<endl;
    while( temp != NULL){
        // cout << temp -> data<<" "<< temp->next<<" "<< temp<<endl;
        temp = temp ->next; 
    }
}

int main(){
    int n, x, i;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> x;
        Insert(x);
    }
    // Print();
    
    return 0;
}