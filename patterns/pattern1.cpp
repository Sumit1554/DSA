//for printing * 3/3

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Entre the number";
    cin>>n;

    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;

        i++;
    }
    return 0;
}