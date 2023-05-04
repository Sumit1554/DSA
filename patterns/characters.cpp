// #include<iostream>
// using namespace std;

// AAAAAA
// BBBBBB
// CCCCCC
// DDDDDD
// EEEEEE
// FFFFFF
// int main()
// {
//     int i,j,n;
//     cout<<"Entre the Number"<<endl;
//     cin>>n;

//     i=1;
//     while(i<=n){
//         j=1;                                                     
//         int val=n;
//         while(j<=n){
//             char ch= 'A'+i-1;
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }



// ********************************************************************************
// ABCD
// ABCD
// ABCD
// ABCD
// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j,n;
//     cout<<"Entre the Number"<<endl;
//     cin>>n;

//     i=1;
//     while(i<=n){
//         j=1;
//         int val=n;
//         while(j<=n){
//             char ch= 'A'+j-1;
//             cout<<ch;
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
    cout<<"Entre n";
    cin>>n;

    i=1;
    while(i<=n){
        j=1;
        while(j<=i){
            char ch = ('A'+ i-1);
            cout<<ch;
            j++;
        }
    }
    return 0;
}