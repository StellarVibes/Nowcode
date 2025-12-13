#include <iostream>
using namespace std;

int Getmonthday(int year,int month) 
{
    int monthday[13]={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)))
    {
        return 29;
    }
    return monthday[month];
}

int main() {
    int m,year, month,day,num;
    cin>>m;
    for(int i = 0;i<m;i++)
    {
        cin>>year>>month>>day>>num;
        day+=num;
        while(day>Getmonthday(year,month))
        {
            day-=Getmonthday(year,month);
            month++;
            if(month>12)
            {
                year++;
                month=1;
            }
        }
        if(i<m-1)
            printf("%d-%02d-%02d\n",year,month,day);
        else
            printf("%d-%02d-%02d",year,month,day);
    }
    
    return 0;
}