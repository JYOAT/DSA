vector <int> rotateArray (vector < int >v, int k)
{
  vector < int >temp (v.size ());
  for (int i = 0; i < v.size (); i++)
	{
	  temp[(i + k) % v.size ()] = v[i];
	}
  v = temp;
  return v;

}

int
main ()
{
  vector < int >V;
  V.push_back(99);
  V.push_back(-1);
  V.push_back(100);
  V.push_back(3);
  vector <int> A=rotateArray (V, 2);
  for(auto i : A){
      cout<<i<<endl;
  }
}
