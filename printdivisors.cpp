#include <iostream>
#include <vector>
#include <algorithm> 
#include <cmath> 

using namespace std;

vector<int> printDivisors(int num){
    vector<int> v ;
    for(int i =1; i<=sqrt(num);i++){
        if(num%i==0){
            v.push_back(i);
            if((num/i)!=i){
                v.push_back(num/i);
            }
            
        }
        
    }
    sort(v.begin(),v.end());
    return v;
}

int main()
{   int n;
    cout<<"Enter a no."<<endl;
    cin>>n;
    vector <int> v = printDivisors(n);
    for(auto i :v){
        cout<<i<<endl;
    }
    return 0;
}

//tc = O(sqrt(n))
