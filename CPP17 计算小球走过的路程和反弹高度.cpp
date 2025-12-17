#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double h;
    int n;
    cin >> h;
    cin >> n;
    float a = h;
    h/=2;
    while(--n)
    {
        a+=h*2;
        h/=2;
    }
    printf("%.1f %.1f",a,h);
    
    return 0;
}