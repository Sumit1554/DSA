//    *
//   **
//  ***

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<<"Entre n";
    cin>>n;

	
    i=1;
    while(i<=n){
    	
    	int space=n-i;
    	while(space){
    		cout<<" ";
    		space--;
    	}
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
// ************************************************************************



// #include<iostream>
// using namespace std;

// int main()
// {
//     int i,j,n;
//     i=1;
//     while(i<=n){
//         j=1;
//         int str=n-i;
//         while(j<=n){
//             cout<<"*";
//             str--;
//         }
//         cout<<endl;
//         i++;
//     }
//     return 0;
// }