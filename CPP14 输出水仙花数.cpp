#include <iostream>
using namespace std;

int main() {
    for(int w = 0;w<1000;w++)
    {
        int i = w;
        int a = i%10;
        i/=10;
        int b = i%10;
        i/=10;
        int c = i%10;
        if(a*a*a+b*b*b+c*c*c==w&&w>=100)
        {
            cout<<w<<endl;
        }
    }

    return 0;
}