//variety one
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int pos = 0;
    int neg = 1;
    int n = a.size();
    vector<int> ans(n,0);
    for(int i =0; i<n; i++){
        if(a[i]<0){
            ans[neg]=a[i];
            neg = neg+2;


        }
        else{
            ans[pos]=a[i];
            pos= pos+2;
        }
    }
    return ans;

}

//variety 2
