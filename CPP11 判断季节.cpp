#include <iostream>
using namespace std;

int main() {
    
    int month;
    cin >> month;
    if(month<1||month>12)
    {
        cout<<"不合法";
    }
    else if(month>=3&&month<=5)
    {
        cout<<"春季";
    }
    else if(month>=6&&month<=8)
    {
        cout<<"夏季";
    }
    else if(month>=9&&month<=11)
    {
        cout<<"秋季";
    }
    else 
    {
        cout<<"冬季";
    }

    return 0;
}