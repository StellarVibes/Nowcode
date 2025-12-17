#include <iostream>
using namespace std;

int main() {
    long long a=0;
    long long b = 9;
    for(int i = 0;i<10;i++)
    {
        a+=b;
        b*=10;
        b+=9;
    }
    cout<<a;
    
    return 0;
}