#include <iostream>

using namespace std ;

class Shop{
	
	////////data member //////////////
	int itemId[50];
	int itemPrice[50];
    static int counter;
	public:
		void setData(void);
		void displayData(void);
		
};
int Shop :: counter;           //static variable 
////////////////member functions //////////////////

void Shop ::setData (void)
{
	cout << "Enter Id of an object  "<< counter+1 <<" :  " ;
	cin >> itemId[counter];
	
	cout << "Enter Price of an object "<< counter+1 <<" :  ";
	cin >> itemPrice[counter];
	
	counter ++ ;
}


void Shop :: displayData (void)
{
	for(int i =0 ; i<counter ; i++ )
	{
		cout <<"The price of an item with id  " <<  itemId[i] <<"  is : " << itemPrice[i] <<endl ;
	}
}


int main()
{
	Shop s;
	int a ; 
	
	
	cout << "How many items data  you wanna enter between (1 - 50 ) : "<<endl;
	cin  >> a;
	
	////////////////// get data from the user ///////////////////
	for (int i =0 ; i < a ; i++ )
	{
	s.setData();	
	}	
	
	////////////////////////display data /////////////////////////
	
	cout <<"Data you Enter is : "<<endl <<endl << endl;
	
	for (int i =0 ; i < (a / 2 ) ; i++ )
	{
     s.displayData();	
	}
	
	
	return 0;
}
