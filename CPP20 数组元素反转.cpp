#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++) 
    {
        cin >> arr[i];
    }
    cout << "[";
    for (int i = 0; i < len; i++) 
    {
        if (i == len - 1) 
        {
            cout << arr[i] << "]" << endl;
            break;
        }
        cout << arr[i] << ", ";
    }
    int len1 =len;
    for(int i = 0;;i++)
    {
        if(i<len1)
        {
            swap(arr[i],arr[len1-1]);
        }
        else
        {
            break;
        }
        len1--;
    }
    cout << "[";
    for (int i = 0; i < len; i++) 
    {
        if (i == len - 1) 
        {
            cout << arr[i] << "]" << endl;
            break;
        }
        cout << arr[i] << ", ";
    }

    return 0;
}