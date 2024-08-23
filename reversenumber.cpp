#include <iostream>
using namespace std;

int revrseNum(int n){
    int rev =0;
    while(n>0){
        int ld=n%10;
        rev = (rev*10)+ld;
        n= n/10;
    }
    return rev;
}

int main()
{   int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    
    int c = revrseNum(num);
    cout<<c;

    return 0;
}
