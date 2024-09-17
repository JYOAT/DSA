#include<bits/stdc++.h>

int majorityElement(vector<int> v) {
	// Write your code here
	int el;
	int count =0;
	for(int i =0; i<v.size();i++){
		if(count==0){
			count =1;
			el=v[i];
			
		}
		else if (v[i]==el){
			count++;
		}
		else{
			count--;
		}
	}

	int c=0;
	for(int i =0; i<v.size();i++){
		if(v[i]==el){
			c++;
		}
	}
	if(c>v.size()/2){
		return el;
	}
	return -1;

}

//tc=o(n)+O(n)
//sc= O(1)
