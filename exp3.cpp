#include<iostream>
#include<string.h>
using namespace std ;
class Book{
	private :
		string tile;
		string author_name;
		int count,no_chapter;
		bool format_type;
		float chapter_pages[100];
	public :
		Book()
		{
			title = " ";
			author_name = " ";
			count = 0 ;
			no_chapater =0 ;
			format_type = 0 ;
			chapater_pages = 0; 
		}
		Book(string t ,string an ,int c ,int nc , bool ft ,float cp)
		{
			title = t;
			author_name = an;
			count = c ;
			no_chapater = nc  ;
			format_type = ft ;
			chapater_pages = cp ; 
			cout<<"\n Title of the book "<<title;
			cout<<"\n Author name is "<<author_name;
			cout<<"\n Count is  "<<count;
			cout<<"\n Number of Chapater   "<<no_chapater;
			cout<<"\n Foramt type of book(true -hrdcover/paperback)"<<format_type;
			cout<<"\n chapater pages "<<chapater_pages;	
		}
		Book(const Book& obj)
		{
			obj.tile = title;
			obj.author_name = author_name ;
			obj.count = count;
			obj.no_chapter = no_chapter;
			obj.format_type= format_type;
			obj.chapter_pages = chapter_pages;
			
		}
		
};















