long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
  //kadane algo
    long long sum = 0;
    long long maxi = LONG_MIN;
    int start= 0;
    int startvar=-1;
    int endvar=-1;
    for(int i =0; i<n;i++){
        if(sum==0){
            start=i;
        }
        sum+=arr[i];
        if(sum>maxi){
            maxi=sum;
            startvar=start;
            endvar=i;
        }
        if(sum<0){
            sum=0;
        }

    }
    if(sum==0){
        return 0;
    }

    else {
        return maxi;
    }
}
