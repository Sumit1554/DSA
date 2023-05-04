#include<iostream>
using namespace std;
bool search(int arr[][3], int target, int row, int col){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}


int main()
{
    int n;
    int arr[3][3];
    cout<<"Entre the element: "<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"Entre element for search: "<<endl;
    cin>>n;

    if(search(arr, n, 3, 3)==1){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Not Found! "<<endl;
    }
    return 0;
}







