#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n){
        for (int i = n-1; i>=0; i--){
            int didswap = 0;
            for (int j =0; j<=i-1;j++){
                if (arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    didswap=1;
                }
            }
            if(didswap ==0)  {
                break;
            } 
           
    }
}    

int main()
{
    int A[10]={4,11,3,9,8};
    int size = 5;
  bubbleSort(A,size);
    for (int i =0; i<size;i++){
        cout<<A[i]<<endl;
        
    }
}

//timecomplexity
//O(n^2) = worst/avg and O(n) = best case
