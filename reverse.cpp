#include <iostream>
#include <vector> 
using namespace std;


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

int
main ()
{
  vector < int >arr;
  arr.push_back(19);
  arr.push_back(10);
  arr.push_back(2);
  arr.push_back(90);
  arr.push_back(0);
  arr.push_back(3);
  
  vector<int> V = reverse(arr);
  
  for(auto i : V){
      cout<< i<<endl;
      
  }



  return 0;
}
