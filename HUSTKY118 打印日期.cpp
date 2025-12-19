#include <climits>
#include <iostream>
#include <iterator>
using namespace std;

int returnmonthday(int year,int month)
{
    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%4==0&&year%100!=0)||year%400==0)
    {
        arr[2]++;
    }
    return arr[month];
}

class date
{
public:
    date(int year,int n)
    {
        _year=year;
        _month=1;
        _day=1;
        while(n--)
        {
            _day++;
            if(_day>returnmonthday(_year, _month))
            {
                _day=1;
                _month++;
            }
        }
    }
    void print()
    {
        printf("%d-%02d-%02d",_year,_month,_day-1);
    }
private:
    int _year;
    int _month;
    int _day;
};
int main() {
    int a, b;
    while (cin >> a >> b) 
    { 
        date d(a,b);
        d.print();
        //cout << d._year << endl;
    }
    
    return 0;
}
