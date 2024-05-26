#include <iostream>
using namespace std;

void bubbleSort(int A[], int size){
    for (int i =1; i<size ; i++){
        bool swapped = false;
        for (int j = 0 ; j<size-i ; j++){
            if (A[j]> A[j+1]){
                swap(A[j],A[j+1]);
                swapped=true;
            }
        }
        if (swapped==false)
        break;
    }
}

int main()
{
    int arr[10]={5,9,12,2,88};
    int size = 5;
    bubbleSort(arr,size);
    for (int i =0; i<size;i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}
