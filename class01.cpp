#include<iostream>
using namespace std;
class Box{
	private :
		int l,b,h;
	public :
		void getboxinfo()
		{
			cout<<"\n The lenght of boxis "<<l;
			cout<<"\n The breadth is box "<<b;
			cout<<"\n The height is box "<<h;
		}
		void setboxinfo()
		{
			cout<<" \n Enter the values of lenght,breadth,height";
			cin>>l >>b >> h;
		}
		Box()
		{
			cout<<"Default Constructor";
			l=3;
			b=4;
			h=5;
		}
		Box(int x) // para. const
		{
			cout<<"Parameterised cons.";
			l=b=h=x;
			cout<<"\n The lenght of boxis "<<l;
			cout<<"\n The breadth is box "<<b;
			cout<<"\n The height is box "<<h;
		}
		Box(const Box& obj) //default copy constructor
		{
		//	cout<<"my copy const ";
			l = obj.l;
			b=obj.b;
			h=obj.h;
		}
};
int main()
{
	Box b1;
	b1.setboxinfo();
	b1.getboxinfo();
	Box b2(8);
	Box b3(b2);
	b3.getboxinfo();
	return 0 ;
}
