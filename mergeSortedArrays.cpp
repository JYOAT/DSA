#include <iostream>
using namespace std;

void mergeArrays(int a[], int n , int b[], int m , int c []){
    int i =0;
    int j= 0;
    int k= 0;
    while(i<n && j<m ){
        if(a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            k++;
            j++;
        }
        
    }
    while(i<n){
        c[k]=a[i];
        k++;
        i++;
        
    }
    
    while (j<m){
        c[k]=b[j];
        k++;
        j++;
    }
    
    
}


int main()
{
    int A[5]={1,3,5,7,9};
    int B[3]={2,4,6};
    int C[8]={0};
    mergeArrays(A,5,B,3,C);
    for(auto i : C){
        cout<<i<<endl;
    }
    return 0;
}
