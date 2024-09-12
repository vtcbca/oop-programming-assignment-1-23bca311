#include<iostream.h>
#include<conio.h>
#include<string.h>
class employee
{
	private:
	   int eid;
	   char ename[20];
	   char department[20];
	   float salary;
	public:
	   //Constructor
	   employee(int id,char name[20],char dept[20],float sal)
	   {
		eid=id;
		strcpy(ename,name);
		strcpy(department,dept);
		salary=sal;
	   }
	   //Method to display employee data
	void display()
	{
		cout<<"employee id:"<<eid<<endl;
		cout<<"employee name:"<<ename<<endl;
		cout<<"department:"<<department<<endl;
		cout<<"salary:"<<salary<<endl;
	}
	//Method to get employee name
	const char* getname()
	{
		return ename;
	}
};
int main()
{
	//Array to store 5 employee objects
	clrscr();
	employee employees[5]={
		employee(1,"Roshani","HR",50000),
		employee(2,"Bhumika","Finance",60000),
		employee(3,"Anjli","IT",70000),
		employee(4,"Jiya","Marketing",55000),
		employee(5,"Simaran","Sales",65000)
	};
	//display all employees records
	int j;
	cout<<"Employee Records:"<<endl;
	for(j=0;j<5;j++)
	{
		cout<<"\n Employee"<<j+1<<":"<<endl;
		employees[j].display();
	}
	//Searching an employee by name
	char searchname[20];
	int i;
	cout<<"\n Enter the name of the employee to search:";
	cin>>searchname;
	int found=0;
	for(i=0;i<5;i++)
	{
		if(strcmp(employees[i].getname(),searchname)==0)
		{
			cout<<"\n Employee found:"<<endl;
			employees[i].display();
			found=1;
			break;
		}
	}
	if(found==0)
	{
		cout<<"\n Employee not found."<<endl;
	}
	getch();
	return 0;
}