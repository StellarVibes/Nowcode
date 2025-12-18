#include<iostream>
using namespace std;

class rectangle
{
	private:
		int length,width;
	public:
		void set(int x,int y)
        {
			length=x;
			width=y;
		}
		int getlength()
        {
			return length;
		}
		int getwidth()
        {
			return width;
		}
		int area()
        {
			return length*width;
		}
		void compare(rectangle a)
        {
			if(this->area()>a.area())
			{
				cout<<"1";
			}
			else
			{
				cout<<"0";
			}
		}
};

int main(){
	int l1 = 0,w1 = 0,l2 = 0,w2 = 0;
	cin>>l1>>w1>>l2>>w2;
	rectangle a,b;
	a.set(l1,w1);
	b.set(l2,w2);
	a.compare(b);

	return 0;
}