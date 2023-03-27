#include <iostream>
using namespace std ;

class Time
{
	int hours;
	int mins;
	int sec;
	
	public :
		Time()
		{
			hours = mins = sec =0;
		}
		
		Time(int h , int m , int s)
		{
			hours = h ;
		    mins = m;  
			sec =  s ;
		}
		friend ostream& operator<< (ostream &out , Time &t)
		{
			cout <<"Hours : " << t.hours << endl ;
			cout <<"Minutes : " << t.mins << endl ;
			cout <<"Seconds : " << t.sec << endl ;
		}
		~Time()
		{
			cout<<".............";
		}
};

int main ()
{
	Time t(6,6,6);
	cout << t ;
	return 0; 
}
