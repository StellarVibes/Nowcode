#include <iostream>
#include <string>
using namespace std;

int get_day(int year,int month,int day)
{
    int num = 0;
    int monthday[13]={0,31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
        monthday[2]++;
    }
    while(month>0)
    {
        num+=monthday[--month];
    }
    return num+day;
}

int get_monthday(int year,int month)
{
    int monthDays[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month==2&&((year%4==0&&year%100!=0)||(year%400==0)))
    {
        return 29;
    }
    return  monthDays[month];
}

int main() {
    string s1,s2;
    cin>>s1>>s2;
    //cout<<s1<<" "<<s2;
    int n1 = std::stoi(s1);
    int n2 = std::stoi(s2);
    //cout<<n1<<" "<<n2;
    int year1 = n1/10000,year2 = n2/10000,month1 = (n1%10000)/100,month2 = (n2%10000)/100,day1 = n1%100,day2 = n2%100;
    //cout<<year1<<month1<<day1;
    //cout<<year2<<month2<<day2;
    int max_year = year1,min_year = year2,flag = 1;
    if(min_year>max_year)
    {
        int tmp = min_year;
        min_year = max_year;
        max_year = tmp;
        flag = -1;
    }
    int num = 0;
    for(int i = min_year;i<max_year;i++)
    {
        if((i%4==0&&i%100!=0)||(i%400==0))
        {
            num+=366;
        }
        else{
            num+=365;
        }
    }
    //cout<<num<<endl;
    //cout<<get_day(year1,month1,day1)<<endl;
    //cout<<get_day(year2,month2,day2)<<endl;
    num+=get_day(year1,month1,day1)*flag+get_day(year2,month2,day2)*-flag+1;
    cout<<num;

    return 0;
}