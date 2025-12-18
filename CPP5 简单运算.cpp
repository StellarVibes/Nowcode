#include <iostream>
using namespace std;

int main() {

    int a = 0;
    int b = 0;
    cin>>a>>b;
    int max = a;
    int min = b;
    if(min>max)
    {
        swap(min,max);
    }
    cout<<max+min<<' '<<max-min<<' '<<max*min<<' '<<max/min<<' '<<max%min;

    return 0;
}