// #include <iostream>
// using namespace std;


// *****************************************************************************************************
// 1
// 2       3
// 4       5       6
// 7       8       9       10
// 11      12      13      14      15
// int main()
// {
//     int i, j, n;
//     cout << "Entre the number: " << endl;
//     cin >> n;

//     i = 1;
//     int count=1;
//     while (i <= n)
//     {
//         j = 1;
        
//         while (j <= i)
//         {
//             cout << count<<"\t";
//             count++;
//             j++;
//         }
//         cout << endl;
//         i++;
//     }
    
    
//     return 0;
// }


// *****************************************************************************************************
// 1
// 2       3
// 3       4       5
// 4       5       6       7
// 5       6       7       8       9
// #include <iostream>
// using namespace std;

// int main()
// {
//     int i, j, n;
//     cout << "Entre the number: " << endl;
//     cin >> n;

//     i = 1;
//     int count=1;
//     while (i <= n)
//     {
//         j = 1;
//         int val=i;
//         while (j <= i)
//         {
//             cout << val<<"\t";
//             val++;
//             j++;
//         } 
//         cout << endl;
//         i++;
//     }
    
    
//     return 0;
// }

// *****************************************************************************
// *****************************************************************************************************
// 1
// 2       3
// 3       4       5
// 4       5       6       7
// 5       6       7       8       9
#include <iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Entre the number: " << endl;
    cin >> n;

    i = 1;
    int count=1;
    while (i <= n)
    {
        j = 1;
        int val=i;
        while (j <= i)
        {
            cout << (i+j-1)<<"\t";
            
            j++;
        } 
        cout << endl;
        i++;
    }
    
    
    return 0;
}