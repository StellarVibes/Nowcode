#include <iostream>
using namespace std;

int main() {
    int year,month,day,num;
    cin>>year>>month>>day;
    int monthday[13]={0 ,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        monthday[2]++;
    }
    while(month>0)
    {
        num+=monthday[--month];
    }
    cout<<num+day;
}