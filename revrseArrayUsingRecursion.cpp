#include <iostream>


using namespace std;

void reverseArray(int i, int a[], int n){
    if(i>=int(n/2))return;
    swap(a[i],a[n-i-1]);
    reverseArray(i+1,a,n);
}

int main()
{   int n;
   int a[10];
    cout<<"enter n"<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
    cin>>a[i];
}
    reverseArray(0,a,n);
     for (int i=0;i<n;i++){
    cout<<a[i];
}
    
    return 0;
}


///string is palindrome???
#include <iostream>
using namespace std;
bool palin(int i, string &s){
    if(i>=s.size()/2){
        return true;
    }
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    return palin(i+1,s);
}
int main()
{   string s = "moomp";
    cout<<palin(0,s);
    return 0;
}
