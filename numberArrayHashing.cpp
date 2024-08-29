#include <iostream>
#include <map>
using namespace std;

int main()
{   
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int A[10];
    for(int i=0; i<n ;i++){
        cin>>A[i];
    }
    
    //precompute
    map <int, int> hash;
    for(int i=0;i<n;i++){
        hash[A[i]]++;
    }
    int max=0;
    for(auto it : hash){
        if (it.first>max){
            max= it.first;
        }
        
        
    }
    cout<<max;
    //fetch
    
    /*int q;
    cout<<"enter query no"<< endl;
    cin>>q;
    
    while(q--){
        int num;
        cout<<"enter no- "<<;
        cin>>num;
        
        cout<<hash[num]<<endl;
    }*/
    
    
    
    return 0;
}
