#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    // Write your code here.
    int mini= prices[0];
    int maxProfit= 0;
    int sizee= prices.size();
    for(int i =1; i<sizee ; i++){
        int cost =prices[i]-mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini,prices[i]);
    }
    return maxProfit;
}
//tc=O(n)
