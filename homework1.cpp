/*1. The class should have following four private data members.
1. A string named name that holds the employee’s name.
2. An integer named id that holds the employee’s ID number.
3. A string named department that holds the name of the department where the employee works.
4. A string named position that holds the employee’s job title.*/

#include <iostream>

using namespace std;

 class Employee
 {
 	//data members of the class
 	private:
 	string name ;
 	int ID ;
 	string deparetment ;
 	string position;
 	
 	public:
 		//parameterized constructor
 		Employee (string n ,int id , string depart ,string pos)
 	    	{
 			cout << "Paramerterized constructor... "<<endl;
 			name =	n;
            ID   =	id;
 			deparetment  =	depart;
 			position  =	 pos;
		    }
		 
 		Employee (string n ,int id )
 		    {
 			cout << "Paramerterized constructor... "<<endl;
 			name =	n;
            ID   =	id;
 			deparetment  =	" ";
 			position  =	 " ";
		    }
		    
		//default constructor    
		Employee ()
 		    {
 			cout << "Default constructor... "<<endl;
 			name =	" ";
            ID   =	0;
 			deparetment  =	" ";
 			position  =	 " ";
		    }
		//copy constructor
	    Employee (const Employee & obj2)
 		    {
 			cout << "copy constructor... "<<endl;
 			name =	" ";
            ID   =	0;
 			deparetment  =	" ";
 			position  =	 " ";
		    } 
		
		//Destructor    
		 ~Employee()
		    {
		 		cout << "“Destructor executed...” "<<endl;
			}   
		//getter and setter
		void setname(string n)
		    {
			name=n;
			}
		string getname()
			{
				return name;
			}
			
		void setid(int id)
		    {
			ID = id;
			}
		int getid()
			{
				return ID;
			}
			
		void setdepartment (string depart)
		    {
		      deparetment = depart;
			}
		string getdepartment()
			{
				return deparetment;
			}
			
		void setposition (string pos)
		    {
		      position = pos;
			}
		string getposition()
			{
				return position;
			}		
	//Member function
	void setInfo (string employeeName ,int employeeId , string employeeDepart ,string employeePos)	 
	{
		setname(employeeName);
		setid(employeeId);
		setdepartment(employeeDepart);
		setposition(employeePos);
	}
	
	//getinfo function
	void getinfo()
	{
		cout << " Enter Employee name" << endl;
		getline(cin , name);
		setname(name);
		
		
		cout << " Enter Employee ID" << endl;
		cin >> ID;
		setid(ID);
		
		cin.ignore();
		cout << " Enter Employee Department" << endl;
		getline(cin , deparetment);
		setdepartment(deparetment);
		
		cout << " Enter Employee Position" << endl;
		getline(cin , position);
		setposition(position);
		
	}
	
	void putinfo()
	{ 
		cout<< name << "\t"<< ID << "\t"<< deparetment << "\t" << position <<endl ;
	}
 };
int main()
{
	Employee obj1, obj2("Naveed Ali" , 1230 , "Computer Science" , "Assistant Professor");
	Employee obj3("Nouman Abdullah" , 1231 ) ;
	Employee obj4;
	Employee obj5 = obj2;
	
	obj1.getinfo();
	
	obj3.setdepartment("Computer Science");
	obj3.setposition("Assistant Professor");
	
	obj4.setname("Nadia Khan");
	obj4.setid(1242);
	obj4.setdepartment("Information Technology");
	obj4.setposition("Assistant professor");
	
		cout<< " NAME "<< "\t\t" << "ID " << "\t\t" <<  "Department" << "\t\t" << "Position" <<endl;
		
		obj1.putinfo();
		
		obj2.putinfo();
		
		obj3.putinfo();
		
		obj4.putinfo();
		
		obj5.putinfo();
	
	
return 0; }
