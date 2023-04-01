#include <iostream>
using namespace std;

class sample 
{
	int x;
	int y;
	
	public:
	//default constructor
	 sample()
	 {
	 	x=0;
		y=0;
	 }

	//parameterized constructor
	 sample (int a)
	 {
	 	x=a ;
		y=0;
	 }
	 sample (int a , int b)
	 {
	 	x=a ;
		y=b;
	 }
	 
	 //copy constructor
	  sample (sample const & obj)
	 {
	 	x=obj.x;
	 	y=obj.y;
	 }
	 
	 //destructor 
	 ~sample()
	 {
	 	cout << "..........."<<endl;
	 }
	 //function declaration
	void getData(); 
	void displayData();
	void operator -(); 
	sample operator ++();
	sample operator ++(int  );
	sample operator --();
	sample operator --(int  );
};
void sample :: getData()
	 {
	 	cout <<" Enter value of variable a and b :  "  ;
	 	cin >> x >> y ;
	 }
	 
void sample ::displayData()
	 {
	 	cout <<"Valuue of variable A is : " << x << endl;
	 	cout <<"Valuue of variable B is : " << y << endl;
	 }
	 
	 //operator overloading 
     void sample ::operator -()
	 {
	 	x=-x;
	 	y=-y;
	 }	 
	
    /* void sample ::operator ++()       we can't do obj2 = ++ obj1 by using this ...it will through an error
	 {
	 x++;                        
	 y++;
	 }	*/
	  sample sample ::operator ++()         //pre-increment
	 {
	 	sample temp;
        temp.x = ++x;
	    temp.y= ++y;
	    return temp;
	 }
	  sample sample ::operator ++(int)         //post-increment.............it must have a parameter 
	 {
	 	sample temp;
        temp.x = x++;
	    temp.y= y++;
	    return temp;
	 }
	 
	 	  sample sample ::operator --()         //pre-decrement
	 {
	 	sample temp;
        temp.x = --x;
	    temp.y= --y;
	    return temp;
	 }
	  sample sample ::operator --(int)         //post-decrement.............it must have a parameter 
	 {
	 	sample temp;
        temp.x = x--;
	    temp.y= y--;
	    return temp;
	 }

int main()
{
	sample obj1,obj2;
	obj1.getData();
	
	cout << "Before function call ..."<<endl;
	obj1.displayData();
	
	cout << endl;
	cout <<"object1 ..." <<endl;
	cout <<"After pre-increment(++a) function call..." <<endl;
	++obj1;
	obj1.displayData();	
		
	cout << endl;
	cout <<"After post-increment(a++) function call..." <<endl;
	obj1++;
	obj1.displayData();	
	
	cout << endl;
	cout <<"object1 ..." <<endl;
	cout <<"After pre-increment(a++) function call..." <<endl;
	obj2 = --obj1;
	obj2.displayData();	

	cout << endl;
	cout <<"After post-decrement(a--) function call..." <<endl;
    obj1--;
	obj1.displayData();	
	
	cout << endl;
	cout <<"After unary(-) function call..." <<endl;
	-obj1;
	obj1.displayData();
		
	return 0;
}
