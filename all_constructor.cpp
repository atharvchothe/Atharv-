#include<iostream>
using namespace std ;
class Sc {
	private : 
		int p;
	public : 
		void SetInfo()
		{
			
			cout<<"\n Enter the value of the p : ";
			cin>>p;
		}
		void GetINfo()
		{
			cout<<" \n Value of *p is "<<p;
		}
		Sc()
		{
			cout<<"\n  Default const. ";
			p=10;
			cout<<p;
		}
		Sc(int q)
		{
			cout<<"\n  Parameterised const. ";
			p=q;
			cout<<p;
		}
		Sc(const Sc& obj)
		{
			cout<<" \n My copied constructor ";
		}
};
int main()
{
	Sc s1;
	s1.SetInfo();
	s1.GetINfo();
	Sc s2(100);
	Sc s3(s2);
	s3.GetINfo();
	return 0 ;
}
