#include<iostream>
using namespace std ;
int sum(int *a,int *b)
{
	 int result;
	 result =*a+*b;
	 cout<<result ;
}
int main()
{
	int x,y;
	cout<<"\n Enetr the values of X and Y :  ";
	cin>>x>>y;
	int result;
	result=sum(&x,&y);
	return 0 ;
}
