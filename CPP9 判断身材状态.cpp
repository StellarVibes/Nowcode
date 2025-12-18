#include <iostream>
using namespace std;

int main() {
   
    double weight;
    double height;
    cin >> weight;
    cin >> height;
    float BMI = weight/height/height;
    if(BMI<18.5)
    {
        cout<<"偏瘦";
    }
    else if(BMI>24.9)
    {
        cout<<"偏胖";
    }
    else if(BMI>=18.5&&BMI<=20.9)
    {
        cout<<"苗条";
    }
    else 
    {
        cout<<"适中";
    }

    return 0;
}