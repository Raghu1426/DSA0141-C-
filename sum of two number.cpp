#include<iostream>
using namespace std;
class sum
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"Enter x and y values : \n";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"Sum of x and y is : "<<x+y;
		}
};
int main()
{
	sum s;
	s.getdata();
	s.display();
	return 0;
}
