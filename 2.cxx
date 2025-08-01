#include <iostream>
using namespace std;
class smallboj
{
  private:
	int somedata;
  public:
	void setdata(int d,int e)
	{
		somedata = d*e;
	}
	void showdata()

	{
		cout << "Data is " << somedata << endl;
	}
};
int main()
{
	smallboj s1, s2 ;

	s1.setdata(10,6);
	s2.setdata(17,76);
	

	s1.showdata();
	s2.showdata();


	return 0;
}