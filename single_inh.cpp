/*#include<iostream>
using namespace std ;
class A {
	public :
		int x ;
		void set()
		{
			cout<<"\n Enter the value of x ";
			cin>>x;
		}
		
};
class B : public A {
	public :
		int y ;
		void set1()
		{
			cout<<"\n Enter the value of y ";
			cin>>y;
		}
};
int main ()
{
	B obj1;
	obj1.set();
	obj1.set1();

}	*/


#include<iostream>
using namespace std ;
class A {
	public : 
		int a ,b ;
		void get()
		{
			cout<<"\n Enter the 2 no.s ";
			cin>>a>>b;
		}
	
};
class  B : class A 
{
	public :
		int c ;
		void add()
		{
			c=a+b ;
		}
		
};
class D : class  A 
{
	public : 
		int d ;
		void sub()
		{
			d= a-b;
		}
};

int main()
{
	B obj1;
	obj1.add();
	obj1.sub();
}
