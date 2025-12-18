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
		string cancover(rectangle& b)
		{
			if((b.length>this->width&&b.length>this->length)||(b.width>this->width&&b.width>this->length))
			{
				return "no";
			}
			if((b.length>this->width||b.length>this->length)&&(b.width>this->width||b.width>this->length))
			{
				return "no";
			}
			return "yes";
		}
};

int main(){
	int l1 = 0,w1 = 0,l2 = 0,w2 = 0;
	cin>>l1>>w1>>l2>>w2;
	rectangle a,b;
	a.set(l1,w1);
	b.set(l2,w2);
	cout<<a.cancover(b);

	return 0;
}

