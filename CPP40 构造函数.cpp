#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        string name;    // 姓名
        int age;    // 年龄
        Person(string name,int age)
        {
            this->name = name;
            this->age = age;
        }
        void showPerson() 
        {
            cout << name << " " << age << endl;
        }
};

int main() {
    string name;
    int age;
    cin >> name;
    cin >> age;
    Person p(name, age);
    p.showPerson();

    return 0;
}