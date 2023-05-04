// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j,n;

//     cout<<"Entre the Number:"<<endl;
//     cin>>n;

//     i=1;
//     while(i<=n){
//         j=1;
//         while(j<=n){
//             cout<<j<<"\t";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }   

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;

    cout<<"Entre the Number:"<<endl;
    cin>>n;

    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<n-j+1<<"\t";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}   