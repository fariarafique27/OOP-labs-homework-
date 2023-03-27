#include <iostream>
using namespace std ;

class BookReading
{
	private:
	int pages ;
	int days ;
	
	public:
		//default constructor 
		BookReading()
		{
			pages = days = 0 ;
		}
		
		//function declaration
		void input();
		BookReading operator+ (BookReading obj);
		void print();	
		
		//destructor
		~BookReading()
		{
			cout <<"    ......   " << endl;
		}
 } ;

//function defination
       void BookReading :: input()
		{
			cout << "Enter how many pages you read : " ;
			cin >> pages ;
			
			cout <<"Enter how many days you read book : ";
			cin >> days;
			cout <<endl;
		}
		
        BookReading BookReading :: operator+ (BookReading obj)
		{
			this->pages = pages + obj.pages;
			this->days  = days + obj.days;
		}
		
        void BookReading ::	print()
		{
			cout <<"Result : \n";
			cout <<"You read total " << pages << " pages in " << days <<" days" <<endl;
		}	
		
int main ()
{ 
    BookReading obj1 , obj2 ;
    int days;
   
    
    cout << "\nHow many months you read the book :  " ;
    cin >> days ;
     
        cout <<endl;
     	cout <<1 <<  " Month :" <<endl;
     	obj1.input() ;
     	
     for(int i= 1 ; i <days ; i++ )
     {
     	cout <<i+1 <<  "   Month :" <<endl;
     	obj2.input() ;
     	obj1+(obj2);
     	
	 }
       obj1.print();
     
	return 0 ; 
}
