//for positives and zeroes
//tc=O(2n)
int longestSubarrayWithSumK(vector<int> a, long long k) {
    // Write your code here
    int left =0;
    int right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while(right<n){
        while (left<=right && sum > k){
            sum = sum - a[left];
            left++;

        }
        if(sum==k){
            maxLen =max(maxLen,right-left+1);

        }
        right++;
        if(right<n){
            sum = sum + a[right];
        }
    }
    return maxLen;
}
