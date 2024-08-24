#include <iostream>
using namespace std;

int gcd(int a, int b){
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
            
        }
        else{
            b=b%a;
        }
        
    }
    if(a==0){
        return b;
    }
    return a;
}

int main()
{   int n = 36;
    int m = 9;
    int ans = gcd(n,m);
    cout<<ans;
    return 0;
}
