#include<iostream>
using namespace std;

class Array
{
	private:
		int n;//数组大小 
		int *a;//数组 
	public:
        Array(int num,int*arr)
		{
			a = (int*)malloc(sizeof(int)*num);
			n = num;
			for(int i = 0;i<n;i++)
			{
				a[i]=arr[i];
			}
		}
		~Array()
        {
			delete []a;
		}
		void show()
        {
			for (int i=0;i<n;i++) cout<<a[i]<<' ';
		}
};

int main(){
	int n = 0;
    int arr[1000]={0};
	scanf("%d",&n);
	for(int i = 0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	Array a(n,arr);
	a.show();

	return 0;
}

