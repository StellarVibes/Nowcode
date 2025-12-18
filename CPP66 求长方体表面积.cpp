#include<iostream>
using namespace std;

class rectangle
{
	private:
		int length,width;
	public:
		rectangle(int x,int y)
        {
			length=x;
			width=y;
		}
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
};
class cuboid:public rectangle
{
	private:
		int height;
	public:
		cuboid(int x,int y,int z):rectangle(x,y)
        {
			this->height = z;
		}
		int area()
        {
			return (2*rectangle::area()+2*getwidth()*height+2*getlength()*height);
		}	
};
int main(){
	int x = 0,y = 0,z = 0;
	cin>>x>>y>>z;
	cuboid a(x,y,z);
	cout<<a.rectangle::area()<<'\n'<<a.area();

	return 0;
}

