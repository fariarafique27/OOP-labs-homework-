
#include <iostream>

using namespace std ;

class SumArray
{
		int data[5];
		
		public:
			//default constructor 
		/*	SumArray()
			{
				data[5]={0,0,0,0,0};
			}
			*/
			////////////operator overloading 
			int operator[] (int i)
	    	{
		    	return data[i];
	    	}
	    	
	    
			//member function
			void input()
			{
				cout<<"Enter 5 Values in an array   " << endl ;
				for (int i=0 ; i < 5 ; i++)
				{
					cout <<i+1 <<" : ";
					cin  >>data[i];
				}
			}
		
			int  sum()
			{
				int s = 0 ; 
				for (int i=0 ; i < 5 ; i++)
				{
			    	s = s + data[i];
				}
			return s;
			}
			
			//destructor 
	    	~SumArray()
	     	{
		    	cout<<" ........... " <<endl;
	    	}
};
int main(){
	 
    SumArray obj ;
    obj.input();
    int sum = obj.sum();
    
    cout <<endl ; 
	cout <<"Sum of an array is " << sum <<endl;
	return 0;
}
