#include<iostream>
using namespace std;

void printArray(int array[],int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
}


void swap_alternate(int arr[],int size)
{
    for(int i=0;i<size; i+=2){
        if(i+1 <size){
            int temp= arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    cout<<endl;
}

int main()
{
    int even[6]={11,22,33,44,55,66};
    int odd[5]={10,20,30,40,50};

    swap_alternate(even,6);
    printArray(even,6);
    swap_alternate(odd,5);
    printArray(odd,5);
    return 0;
}