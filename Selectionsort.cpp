#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
        for (int i = 0; i<n-1; i++){
            int minIndex = i;
            for (int j =i+1; j<n;j++){
                if (arr[j]<arr[minIndex]){
                    minIndex = j;
                }
            }
           swap(arr[i], arr[minIndex]);
    }
}    

int main()
{
    int A[10]={4,11,3,9,8};
    int size = 5;
    selectionSort(A,size);
    for (int i =0; i<size;i++){
        cout<<A[i]<<endl;
        
    }