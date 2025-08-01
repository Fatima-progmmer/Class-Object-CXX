#include<iostream>
using namespace std;
class value
{
	private:
	int a;
	private:
	void setdata(int b)
	{
		a=b;
	}
	public :
	void showdata(int b)
	{
		cout <<  b;
	}
	
};
int main()
{
	value s1;
	s1.showdata(7);
}