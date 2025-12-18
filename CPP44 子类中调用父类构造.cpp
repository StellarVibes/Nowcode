#include <iostream>
using namespace std;

class Base 
{
    private:
        int x;
        int y;
    public:
        Base(int x, int y) 
        {
            this->x = x;
            this->y = y;
        }
        int getX() 
        {
            return x;
        }
        int getY() 
        {
            return y;
        }
};

class Sub : public Base 
{
    private:
        int z;
    public:
        Sub(int x, int y, int z): Base(x, y)  
        {
           this->z = z;
        }
        int getZ() 
        {
            return z;
        }
        int calculate() 
        {
            return Base::getX() * Base::getY() * this->getZ();
        }
};

int main() {
    int x = 0, y = 0, z = 0;
    cin >> x;
    cin >> y;
    cin >> z;
    Sub sub(x, y, z);
    cout << sub.calculate() << endl;
    
    return 0;
}