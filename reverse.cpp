#include<iostream>
using namespace std;


int main()
{
    int n,result=0;
    cin>>n;
    int d=0;
    for (int i=n; i>0; i=i/10){
            d=i%10;
            ///cout << d;            /// to just print reverse
        result=result*10+d;          /// to store output
       }
    cout << result;
}
