#include <iostream>

#include <string>

using namespace std;

          /* we can also declare obj along with the class 
		  class employee
            {
             class defination 
            }faria , fakhra ,aiman ,aliha ;*/
class Binary
{
	string s;
	public:
		
		// Functions declaration
		void read();
		void chk_binary();
		void ones_compliment();
		void Display();
};

//////////////////////Functions defination /////////////////////
void Binary::read()
    {
    	cout << "Enter binary number: " << endl;        
	  	cin  >> s;                                    
	                                                 
    }
void Binary:: chk_binary()
	{
		//  When exit(0) is used to exit from program, destructors for locally
       //  scoped non-static objects are not called. But destructors are called if return 0 is used.
		for(int i=0 ; i<s.length() ; i++ )
		{
			if(s.at(i) != '0' && s.at(i) != '1')
			{
				cout<<"Not in a Binary formate " <<endl;
				exit(0);
			}
			
		}
	}	

void Binary:: ones_compliment(void)
{
	for(int i=0 ; i<s.length() ; i++ )
	{
		if(s.at(i) == '0')
		{
		    s.at(i) = '1';	
		}
		
		else if(s.at(i) == '1')
		{
		    s.at(i) = '0';
		}
	}
}

void Binary::Display(void)
{
	for(int i=0 ; i<s.length() ; i++ )
	{
		cout << s.at(i);
	}
}
int main()
{
	Binary obj;
	
	obj.read();
	
	obj.chk_binary();
	
	cout <<"Before ones compliment :";
	obj.Display();
	cout<<endl;
	
	obj.ones_compliment();
	
	cout <<"After ones compliment :";
	obj.Display();
	
	return 0;
}
