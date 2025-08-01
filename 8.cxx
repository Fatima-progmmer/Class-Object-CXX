#include<iostream>
using namespace std;
class member
{
	public:
	int num;
};
int main()
{
	member obj1,obj2;
	obj1.num=71;
	obj2.num=67;
	cout << "Object 1 = " << obj1.num << " & " << "Object 2 =" << obj2.num << endl;
	return 0;
}