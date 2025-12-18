#include <iostream>
using namespace std;

class Cube {
    public:
        void setLength(int length)
        {
            _length=length;
        }
        void setWidth(int width)
        {
            _width=width;
        }
        void setHeight(int height)
        {
            _height=height;
        }
        int getLength()
        {
            return _length;
        }
        int getWidth()
        {
            return _width;
        }
        int getHeight()
        {
            return _height;
        }
        int getArea()
        {
            return 2*(_length *_width+_width*_height+_height*_length);
        }
        int getVolume()
        {
            return _length*_width*_height;
        }
    private:
        int _length;
        int _width;
        int _height;
};

int main() {
    int length = 0, width = 0, height = 0;
    cin >> length;
    cin >> width;
    cin >> height;
    Cube c;
    c.setLength(length);
    c.setWidth(width);
    c.setHeight(height);
    cout << c.getLength() << " "
        << c.getWidth() << " "
        << c.getHeight() << " "
        << c.getArea() << " "
        << c.getVolume() << endl;

    return 0;
}