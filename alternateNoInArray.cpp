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
#include<bits/stdc++.h>
using namespace std;

  vector<int> RearrangebySign(vector<int>a, int n){
      vector<int> pos;
      vector<int> neg;
      for(int i =0;i<n;i++){
          if(a[i]<0){
              neg.push_back(a[i]);
          }
          else{
              pos.push_back(a[i]);
          }
          
      }
      if(pos.size()<neg.size(){
          for(int i=0; i<pos.size();i++){
              a[i*2]=pos[i];
              a[i*2+1]=neg[i];
          }
      }
      int index = pos.size()*2;
      //remaining elements
      for(int i = pos.size();i<n;i++){
          a[index]=neg[i];
          index++;
          
      }
      
      else{
      
      // First, fill array alternatively till the point 
      // where positives and negatives ar equal in number.
      for(int i=0;i<neg.size();i++){
      
      a[2*i] = pos[i];
      a[2*i+1] = neg[i];
  }
    
    // Fill the remaining positives at the end of the array.
    int index = neg.size()*2;
    for(int i = neg.size();i<pos.size();i++){
        
        a[index] = pos[i];
        index++;
     }
   }
  return A;
      
  }
//Explanation: The second O(N) is a combination of O(min(pos, neg)) + O(leftover elements). There can be two cases: when only positive or only negative elements are present, O(min(pos, neg)) + O(leftover) = O(0) + O(N), and when equal no. of positive and negative elements are present, O(min(pos, neg)) + O(leftover) = O(N/2) + O(0). So, from these two cases, we can say the worst-case time complexity is O(N) for the second part, and by adding the first part we get the total complexity of O(2*N).

//Space Complexity:  O(N/2 + N/2) = O(N) { N/2 space required for each of the positive and negative element arrays, where N = size of the array A


