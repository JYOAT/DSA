//print name n times
#include <iostream>
using namespace std;
void printName(int i,int n){
    if(i>n){
        return;
    }
    
    cout<<"Jyotsna"<<endl;
    printName(i+1,n);
}

int main()
{   int n;
    cout<<"enter n"<<endl;
    cin>>n;
    printName(1,n);
    return 0;
}

//print numbers from n to 1
#include <iostream>


using namespace std;

void print(int i ,int n){

    if(i>n){
        
        return;
    }
    print(i+1,n);
    cout<<i;
}

int main()
{   int n;
    cout<<"enter n"<<endl;
    cin>>n;
    print(1,n);
    return 0;
}


//functional recursion
//to find sum till n
#include <iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    
    return (n+ sum(n-1));
    
}

int main()
{   int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int ans=sum(n);
    cout<<ans;
    return 0;
}

//factorial
#include <iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }
    
    return (n* factorial(n-1));
    
}

int main()
{   int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int ans=factorial(n);
    cout<<ans;
    return 0;
}
