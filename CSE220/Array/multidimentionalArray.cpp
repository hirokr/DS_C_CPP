#include<iostream>
#include<vector>
using namespace std;

class MultiDimensional{
public:
        int arr[3][3] = {{1,2,3},
                         {4,5,6},
                         {7,8,9}};
        
        int arr1[3][3] = {{1,2,3},
                          {4,5,6},
                          {7,8,9}};

        int size = 3;

    void lowerTriangle(){
        for(int i = 0; i<size; i++){
            for(int j = 0; j <size; j++){
                if (j>i){
                    arr[i][j] = 0;
                }
            }
        }   
        MultiDimensional :: printArray(); 
    }

    void upperTriangle(){
        for(int i = 0; i<size; i++){
            for(int j = 0; j <size; j++){
                if (j<i){
                    arr[i][j] = 0;
                }
            }
        }   
        MultiDimensional :: printArray(); 
    }

    void addition(){
        int newArray[3][3];
        for(int i = 0; i <size; i++){
            for(int j = 0; j<size; j++){
                newArray[i][j] = (arr[i][j] + arr1[i][j]);
            }
        }
        MultiDimensional :: Print(newArray);
    }

    void subtract(){
        int newArray[3][3];
        for(int i = 0; i <size; i++){
            for(int j = 0; j<size; j++){
                newArray[i][j] = abs(arr[i][j] - arr1[i][j]);
            }
        }
        MultiDimensional :: Print(newArray);
    }
    
    void multiplication(){
        int newArray[3][3];
        for(int i = 0; i <size; i++){
            for(int j = 0; j<size; j++){
                newArray[i][j] = sumM(i,j);
            }
        }
        MultiDimensional :: Print(newArray);
    }
private:
    void printArray(){
        for(int i = 0; i<size; i++){
            for(int j = 0; j<size; j++){
                cout << arr[i][j]<< " ";
            }
            cout<<endl;
        }
    }
    
    void Print(int arr3[3][3]){
        for(int i = 0; i<size; i++){
            for(int j = 0; j<size; j++){
                cout << arr3[i][j]<< " ";
            }
            cout<<endl;
        }
    }

    int sumM(int row, int col){
        int sum = 0;
        for(int i =0; i<size; i++)
        {
            sum += arr[row][i] * arr1[i][col];
        }
        return sum;
    }
};

int main(){
    MultiDimensional multi;
    multi.multiplication();

    return 0;
}