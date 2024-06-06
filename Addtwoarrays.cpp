vector<int> reverse (vector < int >v)
 {
  int s = 0;
  int e = v.size () - 1;
  while (s <= e)
	{
	  swap (v[s], v[e]);
	  s++;
	  e--;

	}
return v;
}

vector<int> addTwoArrays(vector<int> v1, vector<int> v2){
    int i = v1.size()-1;
    int j = v2.size()-1;
    vector<int> ans;
    int carry = 0;
     while(i>=0 && j>=0){
         int sum = v1[i]+ v2[j]+ carry;
         carry = sum/10;
         sum = sum%10;
         ans.push_back(sum);
         i--;
         j--;
         
     }
     while(i>=0){
         int sum = v1[i]+carry;
         carry = sum/10;
         sum = sum%10;
         ans.push_back(sum); 
         i--;
         
         
     }
     while(j>=0){
         int sum = v2[j]+carry;
         carry = sum/10;
         sum = sum%10;
         ans.push_back(sum); 
         j--;
     }
     
     while(carry!=0){
         int sum = carry;
          carry = sum/10;
         sum = sum%10;
         ans.push_back(sum); 
     }
     
     reverse(ans);
     return ans;
     
