int seclargest(int n , vector <int> &a){
    int largest = a[0];
    int secondlargest = -1;
    for(int i =1; i<n;i++){
        if(a[i]>largest){
            secondlargest = largest;
            largest= a[i];
        }
        else if (a[i]!=largest && a[i]>secondlargest){
            secondlargest=a[i];
        }
    }
    return secondlargest;
}
int secsmallest(int n, vector<int> &a){
    int smallest = a[0];
    int secondsmallest = INT_MAX;
    for(int i =1; i<n; i++){
        if(a[i]<smallest){
            secondsmallest=smallest;
            smallest = a[i];
        }
        else if (a[i]!=smallest && a[i]<secondsmallest){
            secondsmallest=a[i];
        }

    }
    return secondsmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int ssmallest = secsmallest(n,a);
    int slargest = seclargest(n,a);
    return {slargest,ssmallest};
}
