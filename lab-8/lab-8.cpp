#include <iostream>

using namespace std;

class Collection
{
	int *data;
	int size;
	
	public:
		//parameterize constructor
		Collection(int size)
		{
			this->size =size ;
			data=new int (size);      //allocating array on heap
			
			for(int i=0 ; i< size ; i++ )
			{ 
			data[i] = 0 ;
			}
		}
		
		Collection(int array[] , int size)
		{
			this->size =size ;
			data=new int (size);      //allocating array on heap
			
			for(int i=0 ; i< size ; i++ )
			{
			 this->data[i] = 0 ;
			}
		}
		
		//copy constructor 
		Collection(const Collection& obj)
		{
			this->size =obj.size ;
			data = new int[size];
			
			for(int i=0 ; i< size ; i++ )
			{
			 this->data[i] = obj.data[i] ;
			}
		}
		
		//destructor
		~Collection()
		{
			delete[] data;
		}
		
		//member function 
		int getSize()
		{
			return size;
		}
		
		/*******************set-element *****************/
		void setElement(int i , int k)
		{
			
	    	if(i>=0 && i <size)
	        	{
		    	if(k>0)
		        	data[i]=k;
		    	else
		        	data[i]=0;
	        	}
		    else
	        	{
		        	cout<<"Index is not in an Array ..." <<endl;
	        	}
		}
		
		void putData() const
		{
			for(int i=0 ; i< size ; i++ )
			{
			    cout<<data[i] <<"\t";
			}
		      	cout<<endl;
		} 
		
			/*******************count-Element *****************/
    	int countElement(int key)
	    	{
	    		int count=0;
	        	for(int i=0 ; i< size ; i++ )
			     {
			     if(this->data[i]==key)
			       count++;
		   	     }
			return count ;
	    	}
	    
	    /**************Assignment operator(=)*****************/
		Collection operator= (const Collection& obj)
		{
			if(this!=&obj)        //avoiding self assignment 
			{
				if(size != obj.size )    //checking the size of both object's array
				{
					delete[] data;     //free memory 
					size = obj.size;
					data = new int[size];
				}
				for(int i=0 ; i<size ;i++)
					data[i]=obj.data[i];
			}
			return *this;
		}
		
		/************** Getsubcollection*****************/
		Collection getsubcollection(int start_index , int end_index)
		{
		    int s= ((end_index - start_index)+1);
		    Collection obj(s);
			if(start_index>=0 && start_index<size && end_index >=0 && end_index <this->size )
			{	
			  	for(int i=0 ; i<s ;i++)
				{
                	obj.data[i]=this->data[start_index];
					start_index++;
				}
					return obj;
			}
			else
	       	{
		       	cout<<"Index is not in an Array ..." <<endl;
		       	for(int i=0 ; i<s ;i++)
				{
                	obj.data[i]=0;
					start_index++;
					
				}
				s=0;
		        	return obj;
	       	}
		}	
	    
		/*******************operator (<<) overloading*******************/	
		friend ostream &operator<<(ostream& out ,const Collection& c)
		{
			for(int i=0 ;i<c.size;i++)
			{
			    out<<c.data[i]<<"\t";
			}
			cout<<endl;
			return out;
		}
	  	
		  /*******************operator (>>) overloading*******************/ 	
		friend istream &operator >>(istream& in ,const Collection& c)
		{
		
			for(int i=0 ;i<c.size;i++)
			{
				cout <<"Enter element "<<i+1 <<": ";
			    in>>c.data[i];
			}
			cout<<endl;
			return in;

		}
		
    	/*****************Addition operator (+)******************************/
    	Collection operator+(const Collection& obj)
    	{
    		Collection obj1(this->size);
    		if(this->size != obj.size)
    		{
    			cout<<"Both arrays are not of the same size "<<endl;
    			for(int i=0 ; i<size ;i++)
				{
                	obj1.data[i]=0;
				}
				    size=0;
					return obj1;
			}
			else
			{
				for(int i=0 ; i<size ;i++)
				{
                	obj1.data[i]=data[i]+obj.data[i];
				}
					return obj1;
			}
		}
		
		int &operator[](int index)
		{
		
		    if(index>=0 && index<size)
		       return data[index];
		       
	       int x=99;
		  cout<<"Error!!.. Array index is out of bound "<<endl;
		  return x;
		  
		}
		
		int operator[](int index) const
		{
		    if(index>=0 && index<size)
		       return data[index];
		       
		  else 
		  cout<<"Error!!..Array index is out of bound "<<endl;
		  return 99;
		}
		bool operator-() const
		{
			int flag=0;
			for(int i=0 ; i<size ; i++)
			{
				if(data[i]<=0)
				   flag=1;
				   
				else 
				return false;
			}
			if(flag==1)
			return true;
		}
};

int main()
{
	Collection obj1(5) , obj2(4) ,obj3(5),obj4(2);
	//obj1.putData();

	/*******************set-element *****************/
	obj1.setElement(0 , 14);
	obj1.setElement(1 , 14);
	obj1.setElement(2 , 14);
	obj1.setElement(3 , 12);
	obj1.setElement(4 , 13);
	
	obj3=obj1;
 	/*******************count-Element *****************/
 	cout<<"---------Count Element----------\n"<<endl;
    cout<<"Array: " <<"\t" ;
	obj1.putData();
	cout<<"Total occurance of 14 in an array is: " << obj1.countElement(14)<<endl<<endl;
	
	/**************Assignment operator(=)*****************/
	cout <<"------------Assignment(=) operator---------\n"<<endl;
	obj2=obj1;
	cout<<"Array of obj2 after Assignment : ";
	obj2.putData();

    /**************Getsubcollection*****************/
	cout <<"\n----------Getsubcollection----------"<<endl;
	cout << obj2.getsubcollection(1,4);
	
	/**************Addition operator (+)*****************/
	cout <<"\n---------Addition operator (+)----------"<<endl;
	cout<<"Case-1 (Same size array) : ";
	cout <<obj1+obj3;
	cout<<"Case-2 (Different size array) : \n";
	cout <<obj1+obj4;
	
    cout<<"unary operator(-)"<<endl;
  	if(-obj1)
	{
	    cout<<"non-negative 0r non zero";
	}
	else 
	cout<<"zero 0r negative element"<<endl;
	
	cout <<"\n---------subscript operator[]----------"<<endl;
	cout<<"case-1 :(in bound) ";
	obj2[3]=9;
	cout<<obj2[3]<<endl;
	cout<<"case-2(out of bound)"<<endl;
	obj4[3]=9;
	cout<<obj4[3];
	
	return 0;
}
