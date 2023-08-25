#include<iostream>
using namespace std;

struct Node // getting memory allotment 
{
    int data; // the actual value
    Node* next; // the location of the next value
};

Node* head; //making the global variable for storing the first value memory location

void Insert(int x){
    Node* temp = new Node();
    temp -> data = x;
    // temp -> next = head;
    
    temp -> next = NULL;
    if (head != NULL) temp -> next = head;
    head = temp;
} 

void Print(){
    Node* temp = head;
    cout << "List is: ";
    while( temp != NULL ){
        cout << temp -> data<< " ";
        cout << temp -> next<< " ";
        temp = temp -> next;
    }   
    cout<< endl;
}

int main(){
    head = NULL;
    int n, x;
    cout << "How many numbers: ";
    cin >> n;
    for(int i =0; i<n; i++){
        cout << "Enter The Number: ";
        cin >> x;
        Insert(x);
        Print();
    }
}