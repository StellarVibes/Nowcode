#include <iostream>
using namespace std;

int main() {
    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++) 
    {
        cin >> arr[i];
    }
    for(int i = 0;i<6;i++)
    {
        for(int j = 0;j<6-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    for(auto e:arr)
    {
        cout<<e<<" ";
    }
    
    return 0;
}