#include<iostream>
#include<array>
using namespace std;

class LinearArray{
public:
    int* leftShift(int arr[], int size){
        int last = arr[size-1];
        for (int i = 0; i < size-1; i++){
            arr[i] = arr[i+1];
        }
        arr[size-1] = 0;
        return arr;
    }

    int* rightShift(int arr[], int size){
        int last = arr[size-1];
        for (int i = size-1; i >=0; i--){
            arr[i] = arr[i-1];
        }
        arr[0] = 0;
        return arr;
    }

    int* rotateLeft(int arr[], int size){
        int last = arr[0];
        for (int i = 0; i <size-1; i++){
            arr[i] = arr[i+1];
        }
        arr[size-1] = last;
        return arr;
    }

    int* rotateRight(int arr[], int size){ //incomplete
        int first = arr[0];
        for (int i = size-1; i >=0; i--){
            arr[i-1] = arr[i];
        }
        arr[size-1] = first;
        return arr;
    }

    int* discardCards(int arr[], int size, int target){
        int count = 0;
        
        // copy(arr, arr+size, arr1);
        // 10,2,30,2,50,2,2,0,0
        // for(int i = 0; i<size; i++){
        //     arr1[i-count] = arr1[i];
        //     if(arr1[i] == target){
        //         count ++;
        //     }
        // }
        return arr1;
    }
};

int main(){
    LinearArray lab1= LinearArray(); 
    int arr[9] = {10,2,30,2,50,2,2,0,0};
    int size = sizeof(arr)/ 4;
    // int* newArray = leftShift(arr, 4); 
    // newArray = leftShift(arr, 4); 
    // int* newArray = rightShift(arr, 4); 
    // int* newArray = rotateLeft(arr, 4); 
    int* newArray = lab1.rotateRight(arr, size);
    newArray = lab1.discardCards(arr, size, 2); 
    
    for(int i = 0; i<size; i++){
        cout<< newArray[i] <<" ";
    }
    return 0;
}