#include <iostream>
using namespace std;

int main() {
    int arr[6] = { 0 };
    int len = sizeof(arr) / sizeof(int),min = 1000,max = 0;
    for (int i = 0; i < len; i++) 
    {
        cin >> arr[i];
    }
    for(auto e:arr)
    {
        if(max<e)
        {
            max = e;
        }
        if(min>e)
        {
            min = e;
        }
    }
    cout<<min<<" "<<max;

    return 0;
}