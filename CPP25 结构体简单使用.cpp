#include <iostream>
#include <string>
using namespace std;

struct student {
    string name;
    int age;
    float height;
};

int main() {
    student a;
    cin>>a.name>>a.age>>a.height;
    cout<<a.name<<" "<<a.age<<" "<<a.height;

    return 0;
}