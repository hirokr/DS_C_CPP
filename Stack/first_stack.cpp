#include<iostream>
#include<stack> //standard template library
#include<bits/stdc++.h>
using namespace std;

void Reversed(char *C, int n){
    stack<char> S;
    for(int i=0; i<n; i++){
        S.push(C[i]);
    }
    for(int i=0; i<n; i++){
        C[i] = S.top();
        S.pop();
    }
};

int main(){
    char C[51];
    printf("Enter a string: ");
    gets(C);   
    Reversed(C, strlen(C));
    printf("Output = %s", C);
}