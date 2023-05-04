#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    int count=1;
    cout<<"Entre the Number:"<<endl;
    cin>>n;

    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<count<<"\t";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}