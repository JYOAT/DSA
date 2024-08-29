#include <iostream>


using namespace std;
int main()
{   
    string s;
    cout<<"enter a string"<<endl;;
    cin>>s;
    
    int hash[26]={0};
    
    for(int i =0; i<s.size();i++){
        hash[s[i]-'a']++;
    }
    
    int q;
    cout<<"enter no of query"<<endl;
    cin>>q;
    while(q--){
        char character;
        cout<<"enter a character-";
        
        cin>>character;
        cout<<hash[character-'a']<<endl;
        
    }
    
    return 0;
}
