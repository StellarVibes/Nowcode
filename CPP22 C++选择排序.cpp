#include <iostream>
using namespace std;

void swap(int*x,int*y)
{
    int tmp = *x;
    *x =*y;
    *y = tmp;
}

int main() {

    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int);
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    for(int i = 0;i<len;i++)
    {
        int maxi = 0;
        for(int j =0;j<len-i;j++)
        {
            if(arr[maxi]<arr[j])
            {
                maxi = j;
            }
        }
        //cout<<maxi<<endl;
        swap(&arr[maxi],&arr[len-i-1]);
    }
    for (int i = 0; i < len; i++) {
        cout<< arr[i]<<' ';
    }
    return 0;
}