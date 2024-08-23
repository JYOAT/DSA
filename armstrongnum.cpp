#include <iostream>
using namespace std;

bool armstrong(int n){
    int dup = n;
    int sum =0;
    while(n>0){
        int ld=n%10;
        sum = sum +(ld*ld*ld);
        n= n/10;
    }
    return (sum==dup);

}

int main()
{   int num;
    cout<<"Enter a number"<<endl;
    cin>>num;
    
    
    if(armstrong(num)){
        cout<<num<<" is an armstrong number";
    }
    else
    {cout<<num<<" is not an armstrong no";}

    return 0;
}
