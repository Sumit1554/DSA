#include <iostream>
using namespace std;
bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {-25, 1, 150, 155, 1001, 6, 9, 8, 7, 10};
    cout << "Entre the key" << endl;
    int key;
    cin >> key;

    int result = search(arr, 10, key);

    if (result)
    {
        cout << "key is present" << endl;
    }
    else
    {
        cout << "key is absent" << endl;
    }

    return 0;
}