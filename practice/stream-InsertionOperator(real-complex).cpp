#include <iostream>

using namespace std;

class ComplexNumber 
{
	private :
		int real ; 
		int imaginary;
		
		public :
		
		//Default constructor 	
		ComplexNumber()
		{
			imaginary = real = 0;
    	}
	
		//parameterized constructor
		ComplexNumber(int i , int r)
		{
			imaginary = i;
			 real = r ;
		}	
		
		ComplexNumber(int i )
		{
			imaginary = i ;
			 real = 0 ;
		}
		
		/*ComplexNumber(int r)
		{
			imaginary = 0;
			 real = r ;
		}
		*/
		//copy constructor
		ComplexNumber(const ComplexNumber& obj)
		{
			this->imaginary = obj.imaginary;
		 	this->real = obj.real ;
		}
		
		// declaration 
    	friend	ostream& operator <<(ostream &out , const ComplexNumber &obj );
		
		friend	istream& operator >> ( istream &in , ComplexNumber &obj );
	
};

          //function defination 
        ostream& operator <<(ostream &out , const ComplexNumber &obj )
		{
			out << obj.real << " + "  << obj.imaginary << "i"<<endl; 
			return out ;
			
		}
		
        istream& operator >> ( istream &in , ComplexNumber &obj )
		{
			cout << "Enter real part : "; 
			in >> obj.real ;
			
			cout << "Enter  imaginary part : "; 
			in >> obj.imaginary ;
			cout << endl ; 
			return in ;
		}

int main()
{
   ComplexNumber c1;
   cin >> c1;
   cout << "The complex Number is :  ";
   cout << c1;
   return 0;
}
