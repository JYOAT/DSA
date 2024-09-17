#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{
    // Write your code here
    int low =0;
    int high = n-1;
    int mid = 0;
    while(mid<=high){
        if (arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

//tc=O(n)
//sc=O(1)
