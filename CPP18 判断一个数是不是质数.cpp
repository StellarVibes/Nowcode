#include <iostream>
using namespace std;

int main() {
    int a = 0;
    cin >> a;
    for(int i = 2;i<a;i++)
    {
        if(a % i==0)
        {
            cout<<"不是质数";
            return 0;
        }
    }
    cout<<"是质数";

    return 0;
}