#include <iostream>
using namespace std;

void shiftZeroes(int A[], int n){
    int i=0;
    for(int j =0; j<n;j++){
        if (A[j]!=0){
            swap(A[i],A[j]);
            i++;
        }
    }
}

int main()
{
    int C[6] = {0,9,0,6,0,0};
    shiftZeroes(C,6);
    for(auto i : C){
        cout<<i<<endl;
    }
    return 0;
}
