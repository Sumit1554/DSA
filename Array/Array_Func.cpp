#include<iostream>
using namespace std;
void PrintArray(int arr[],int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i];
        cout<<"\t";
    }
    cout<<"Printing Done"<<endl;

}
int main()
{
    int arr[3] = {1,2,3};
    PrintArray(arr,3);

    int dost[10] = {1,2,3,4,5};
    PrintArray(dost, 10);
    return 0;
}