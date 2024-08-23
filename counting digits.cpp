#include <iostream>
using namespace std;

int countDigits(int n){
    int count =0;
    while(n>0){
        count=count+1;
        n= n/10;
    }
    return count;
}

int main()
{   int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    
    int c = countDigits(num);
    cout<<c;

    return 0;
}
//time complexity = O(log10(n))