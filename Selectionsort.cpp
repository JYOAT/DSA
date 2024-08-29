#include <iostream>
using namespace std;
void selectionSort(int arr[], int n){
        for (int i = 0; i<=n-2; i++){
            int minIndex = i;
            for (int j =i; j<=n-1;j++){
                if (arr[j]<arr[minIndex]){
                    minIndex = j;
                }
            }
           swap(arr[minIndex],arr[i]);
           
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
}

//time complexity = O(n^2) for all cases
