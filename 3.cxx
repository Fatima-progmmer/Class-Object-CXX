#include<iostream>
using namespace std;
class operation
{
	public:
	int add;
	int substrate;
	public:
	void oper(int z ,int y)
	{
		add=z+y;
		substrate=z-y;
	}
	void show()
	{
		cout << "The adding of two numbers is " << add <<endl;
		cout << "The Substraction of two numbers is " << substrate << endl;
	}
};
		int main()
{
	operation num1;
	
	num1.oper(8,5);
	num1.show();
	return 0;
}