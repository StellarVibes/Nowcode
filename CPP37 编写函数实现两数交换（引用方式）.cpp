#include <iostream>
using namespace std;

void function(int& a,int& b)
{
    int tmp = a;
    a = b;
    b = tmp;

}

int main() {

    int m, n;
    cin >> m;
    cin >> n;
    function(m,n);
    cout << m << " " << n << endl;

    return 0;
}