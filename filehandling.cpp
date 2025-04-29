#include<iostream>
#include<fstream>
using namespace std ;
int main()
{
	fstream myfile ;
	myfile.open("file.txt",ios::out);
	if(myfile.is_open()){
		myfile<<"Hello"<<endl;
		myfile.clear();
	}
	return 0 ;
}
