#include <iostream>
using namespace std;

int main() {
    
    int score;
    cin >> score;
    if(score>100||score<0)
    {
        cout<<"成绩不合法";
    }
    else if(score>90)
    {
        cout<<"优秀";
    }
    else if(score>80)
    {
        cout<<"良";
    }
    else if(score>70)
    {
        cout<<"中";
    }
    else if(score>60)
    {
        cout<<"及格";
    }
    else 
    {
        cout<<"差";
    }
    
    return 0;
}