#include<iostream>
using namespace std;
class member
{
	private:
	int a;
	char b;
	public:
	void function ()
	{
		a=30;
		b= 'c';
		cout << a <<"  &  "<< b;
	}
};
int main()
{
	member value;
	value.function();
}