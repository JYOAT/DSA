#include <iostream>
using namespace std;

void insertionSort(int A[], int size){
    for (int i =0; i<=size-1 ; i++){
        int  j = i;
        while (j>0 && A[j-1]>A[j]){
           swap(A[j-1],A[j]);
            j--;
            
        }
       
    }
}

int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,N);
    for (int i =0;i< N;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}

//tc
//O(n^2) - avg,worst
//O(n)=best case
