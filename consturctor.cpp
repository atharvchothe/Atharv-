#include<iostream>
#include<string.h>
using namespace std;
class Person{
	private :
		string name;
		int age;
		int uid;
	public :
		void Setinfo()
		{
			cout<<"\n Enter name of the person :	  ";
			cin>>name;
			cout<<"\nEnter age of the person :  ";
			cin>>age;
			cout<<"\n Enetr UID number of the person :  ";
			cin>>uid;
		}
		void Getinfo()
		{
			cout<<"\n Name of the person is "<<name;
			cout<<"\n Age of the person is "<<age ;
			cout<<"\n UID no. is "<<uid;
		}
		Person()
		{
			cout<<"\n Default constructor is called : ";
		}
		Person(int a)
		{
			cout<<"\n Paramerterised constructor is Called ";
			age = a;
			cout<<"\n Age is "<<age;
		}
		Person(Person& obj)
		{
			cout<<"\n Copy Cons. ";
			age = obj.age;
			cout<<" age is "<<age;
		}
		
};
int main()
{
	Person p1,p2;
	p1.Setinfo();
	p1.Getinfo();
	Person (20);
 return 0;
}
