#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void leftRotate(int arr[], int n, int d) {
    if (n == 0) return;

    // Get the effective number of rotations:
    d = d % n;

    //checking if d is a multiple of n:
    if (d == 0) return;

    int temp[d]; // temporary array

    //step 1: Copying first d elements
    // in the temporary array:
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // step 2: Shift last (n-d) elements
    // to the left by d places in the given array:
    for (int i = d; i < n; i++) {
        arr[i - d] = arr[i];
    }

    //step 3: Place the elements of the temporary
    // array in the last d places of the given array:
    for (int i = n - d; i < n; i++) {
        arr[i] = temp[i - (n - d)];
    }

//OR

/* 
void reverse(vector<int>&arr, int start, int end)

   {  while(start<end)

    {

        int temp=arr[start];

        arr[start]=arr[end];

        arr[end]=temp;

        start++;

        end--;

    }

}

 

vector<int> rotateArray(vector<int> arr, int k) {

   int n = arr.size();

    if (n == 0) return arr; // Handle empty array case

    k = k % n; // In case k is greater than n
    if(k==0) return arr;

 

    // Step 1: Reverse the first k elements

    reverse(arr, 0, k - 1);

    // Step 2: Reverse the remaining elements

    reverse(arr, k, n - 1);

    // Step 3: Reverse the whole array

    reverse(arr, 0, n - 1);

    

    return arr; // Return the rotated array

 

 

}




*/
