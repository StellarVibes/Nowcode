#include <iostream>
using namespace std;

long long function(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*function(n-1);
}

int main() {
    int n;
    cin >> n;
    long long factorial = 1;
    factorial = function(n);
    cout << factorial << endl;
    
    return 0;
}