#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;    
};

Node* start = NULL;

void Insert(int x){
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;
    start = temp ;
}

void Print(){
    cout << endl; 
}

int main(){

    int x;

    cout << "Enter the number: ";
    cin >> x;
    Insert(x);
    Print();
}
