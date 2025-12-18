#include <iostream>
#include <string>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    size_t found = str.rfind(' ');
    printf("%d", str.size() - found - 1);

    return 0;
}