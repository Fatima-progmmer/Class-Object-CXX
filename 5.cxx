#include<iostream>
using namespace std;
class variables
{
	public:
	int a =1;
	int b=2;
	int c= 3;
};
int main()
{
   variables name;
   cout << "a=" <<name.a <<endl;
   cout << "b=" <<name.b <<endl;
   cout << "c=" <<name.c <<endl;
   return 0;
}