#include <iostream>
using namespace std;

void insertionSort(int A[], int size){
    for (int i =1; i<size ; i++){
        int temp = A[i];
        int  j = i-1;
        while (j>=0 && A[j]>temp){
            A[j+1]=A[j];
            j--;
            
        }
        A[j+1]=temp;
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
