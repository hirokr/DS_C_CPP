#include<iostream>
#include<Stack>
#include <cstring>
using namespace std;

void Reverse(char X[], int length){
    stack<char> S;
    for(int i =0; i<length; i++){
        S.push(X[i]);
    }
    for(int i = 0; i<length; i++){
        X[i] = S.top();
        S.pop();
    }
}

int main(){
    char X[100];
    printf("Enter: ");
    gets(X);
    Reverse(X, strlen(X));
    printf("Output: %s", X);
    return 0;

}