#include<iostream>
using namespace std;

int getMax(int array[], int size){
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max = array[i];
        }
    }

    return max;
}

int getMin(int array[], int size){
    int min = INT_MAX;
    for(int i=0;i<size;i++){
        if(array[i]<min){
            min = array[i];
        }
    }

    return min;
}

int main()
{
    int n;
    cout<<"Entre the size of array"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"The maximum value is "<<getMax(arr,n)<<endl;
    cout<<"The minimum value is "<<getMin(arr,n)<<endl;
    return 0;
}