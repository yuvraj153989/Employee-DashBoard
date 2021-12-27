#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string.h>
using namespace std;
struct emp
{
	string name,id,address;
	int contact,salary;
};
emp e[100];
int total=0;

void empdata()
{
	int choice;
	cout<<"How many employees Data do you want to enter ? : "<<"\n";
	cin>>choice;
	for(int i=total;i<total+choice;i++)
	{
		cout<<"Enter Data of Employee "<<i+1<<"\n";
		cout<<"Enter Employee name: ";
		cin>>e[i].name;
		cout<<"Enter ID: ";
		cin>>e[i].id;
		cout<<"Enter Adress: ";
		cin>>e[i].address;
		cout<<"Enter contact: ";
		cin>>e[i].contact;
		cout<<"Enter salary: ";
		cin>>e[i].salary;
		
	}
	total=total+choice;
}
void show()
{
	if(total!=0)
	{
		for(int i=0;i<total;i++)
		{
			cout<<"Data of employee "<<i+1<<"\n";
			cout<<"Employee Name: "<<e[i].name<<"\n";
			cout<<"Employee ID: "<<e[i].id<<"\n";
			cout<<"Employee Address: "<<e[i].address<<"\n";
			cout<<"Employee Contact: "<<e[i].contact<<"\n";
			cout<<"Employee Salary: "<<e[i].salary<<"\n";			
		}
	}
	else
	{
		cout<<"Your Record is empty !!"<<"\n";
	}
}
void search()
{
	if(total!=0)
	{
		string id;
		cout<<"Enter ID of data you want to search: "<<"\n";
		cin>>id;
		for(int i=0;i<total;i++)
		{
			if(id==e[i].id)
			{
			    cout<<"Data of employee "<<i+1<<"\n";
			    cout<<"Employee Name: "<<e[i].name<<"\n";
			    cout<<"Employee ID: "<<e[i].id<<"\n";
			    cout<<"Employee Address: "<<e[i].address<<"\n";
			    cout<<"Employee Contact: "<<e[i].contact<<"\n";
			    cout<<"Employee Salary: "<<e[i].salary<<"\n";
				break;	
			}
			if(i==total-1)
			{
				cout<<"No such record found"<<"\n";
			}
		}
	}
	else
	{
		cout<<"Your Record is Empty! "<<"\n";
	}
}
void update()
{
	if(total!=0)
	{
		string id;
		cout<<"Enter ID of data you want to Update: "<<"\n";
		cin>>id;
		for(int i=0;i<total;i++)
		{
			if(id==e[i].id)
			{
				cout<<"Previous Data"<<"\n";
			    cout<<"Data of employee "<<i+1<<"\n";
			    cout<<"Employee Name: "<<e[i].name<<"\n";
			    cout<<"Employee ID: "<<e[i].id<<"\n";
			    cout<<"Employee Address: "<<e[i].address<<"\n";
			    cout<<"Employee Contact: "<<e[i].contact<<"\n";
			    cout<<"Employee Salary: "<<e[i].salary<<"\n";
			    
				cout<<"\nEnter New Data"<<"\n";
				cin>>e[i].name;
		        cout<<"Enter ID: ";
		        cin>>e[i].id;
		        cout<<"Enter Adress: ";
		        cin>>e[i].address;
		        cout<<"Enter contact: ";
		        cin>>e[i].contact;
		        cout<<"Enter salary: ";
		        cin>>e[i].salary;
				break;	
			}
			if(i==total-1)
			{
				cout<<"No such record found"<<"\n";
			}
	}}
	else
	{
		cout<<"Your Record is Empty! "<<"\n";
	}
}
void del()
{
	if(total!=0)
	{
		char user;
		cout<<"Press 1 to delete full record"<<"\n";
		cout<<"Press 2 to delete specific Record"<<"\n";
		user=getch();
		if(user=='1')
		{
			total=0;
			cout<<"ALL RECORDS DELETED...";
		}
		if(user=='2')
		{
			string id;
		    cout<<"Enter ID of data you want to Delete: "<<"\n";
		    cin>>id;
		    for(int i=0;i<total;i++)
		    {
		    	if(id==e[i].id)
		    	{
		    		for(int j=i;j<total;j++)
		    		{
		    		    e[j].name=e[j+1].name;
		    		    e[j].id=e[j+1].id;
		    		    e[j].address=e[j+1].address;
		    		    e[j].contact=e[j+1].contact;
		    		    e[j].salary=e[j+1].salary;
		    		    total--;
		    		    break;
		    	    }
		    	    if(i==total-1)
			            {
				            cout<<"No such record found"<<"\n";
			            }
				}
			}
		}
	}
	else
	{
		cout<<"Your Record is Empty !!"<<"\n";
	}
}
int main()
{
	cout<<"\n\n\t\tEMPLOYEE MANAGEMENT SYSTEM"<<"\n";
	cout<<"\n\n\t\tSIGN UP"<<"\n";
	string username,password;
	cout<<"\n\t\tEnter Username: ";
	cin>>username;
	cout<<"\n\t\tEnter Password: ";
	cin>>password;
	cout<<"\n\t\tCreating ID, please be patient for while";
	for(int i=0;i<5;i++)
	{
		cout<<".";
		Sleep(1000);
	}
	cout<<"\n\t\tThanks for waiting, Your ID has been activated succesfully."<<"\n";
	system("cls");
	start:
	cout<<"\n\n\t\tEMPLOYEE DASHBOARD"<<"\n";
	cout<<"\n\n\t\tLogin"<<"\n";
	string username1,password1;
	cout<<"\n\n\t\t\tUsername: ";
	cin>>username1;
	cout<<"\n\n\t\t\tPassword: ";
	cin>>password1;
	if(username1==username && password1==password)
	{
		system("cls");
		char user;
		while(true)
		{
			cout<<"Press 1 to enter data"<<"\n";
			cout<<"Press 2 to show data"<<"\n";
			cout<<"Press 3 to search data"<<"\n";
			cout<<"Press 4 to update data"<<"\n";
			cout<<"Press 5 to delete data"<<"\n";
			cout<<"Press 6 to logout"<<"\n";
			cout<<"Press 7 to exit"<<"\n";
			user=getch();
			switch(user)
			{
				case '1':
					empdata();
					break;
				case '2':
					show();
					break;
				case '3':
					search();
					break;
				case '4':
					update();
					break;
				case '5':
					del();
					break;
				case '6':
					goto start;
					break;
				default:
					cout<<"\aInvalid input"<<"\n";
					break;
		}
    }
    }
    
	else if(username1!=username)
	{
		cout<<"Entered Username is Incorrect! ";
		Sleep(3000);
		goto start;
	}
	else if(password1!=password)
	{
		cout<<"Entered Password is Incorrect! ";
		Sleep(3000);
		goto start;
	}
}