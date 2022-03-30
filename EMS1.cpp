/*
             EMPLOY MANAGEMENT SYSTEM
Muhammad Usman Bin Farid
2021-CS-142
Section : c
Admin:
   Username : Admin
   Password : 12345678
Employ:
   Username : Employ
   Password : 12345678
*/
#include <iostream>
#include <stdlib.h>

using namespace std;

main()
{
	int admin_password = 0, admin_employ = 0, employ_password = 0, employ_p1 = 0, admin_p1 = 0, emp_rank = 0, emp_pay = 0 , emp_reward = 0 , emp_comp_task = 0;
	int emp_absence = 0, emp_attendance = 0 , emp_duduct = 0 , task1_time = 0 , task2_time = 0 , task3_time = 0 , task4_time = 0 , previous_pass = 0 , emp_deduct = 0;
	int we_years , emp_rank1;
	string admin_user , employ_user , emp_name , task_1 , task_2 , task_3 , task_4 , remarks;
	
	char x , y;
	
	//assighning password
	employ_p1 = 12345678;
	admin_p1 = 12345678;
	
	//first header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
    cin >> admin_employ;
    
	system("cls");
	
	//second header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
	//if user enter admin
	if(admin_employ == 1)
	{
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		//3 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 1)
			{
				//3.5 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
				cout << "Main Menu > Add Employ." << endl;
				cout << "-----------------------------" << endl;
				cout << "Enter Employ Name : ";
				cin >> emp_name;
				cout << "Enter Employ rank : ";
				cin >> emp_rank;
			}//end of most nested if
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//4 header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//5 header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
	//if user enter admin
	if(admin_employ == 1)
	{
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
	    //6 header 
    	cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
			
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
	        system("cls");
	        
			if(admin_employ == 2)
			{
	            //7 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > Assighn Username / Password" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Enter username of employ : ";
				cin >> employ_user;
				cout << "Enter password of employ : ";
				cin >> employ_p1;
			}//end of most nested if
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//Third header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//8 header 
    cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
    
	//if user enter admin
	if(admin_employ == 1)
	{
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		//9 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
		    system("cls");	
			if(admin_employ == 3)
			{
				//10 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
				cout << "Main Menu > Release Pay" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Enter pay of Employ 1 : ";
				cin >> emp_pay;
			}//end of most nested if
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//fourth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	//if user enter admin
	if(admin_employ == 1)
	{
		//11 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//12 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 4)
			{   
			    //13 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > Grant / Reward or Bonus." << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Enter Reward of Employ 1 : ";
				cin >> emp_reward;
			}//end of most nested if
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//fifth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//14 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//15 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ list" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 5)
			{
				//16 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > Attendance" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Enter how many days out 0f 30 employ 1 present : ";
				cin >> emp_attendance;
				emp_absence = 30 - emp_attendance;
				cout << "employ 1 is absent " << emp_absence << " day(s)." << endl;
			}//end of most nested if
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//sixth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//17 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
		//admin user and password
		
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//18 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 6)
			{
				//19 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
				cout << "Main Menu > Deductions" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "employ 1 is absent " << emp_absence << " day(s)." << endl;
				emp_deduct = emp_absence * 100;
				cout << "Employ deductions : " <<emp_deduct;
			}//end of most nested if
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//seventh header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//20 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//7 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 7)
			{
				//21 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > Remove Employ." << endl;
				cout << "----------------------------" << endl;
				cout << "Do you wanna remove employ(y or n) : ";
				cin >> y;
				
				if(y == 'y')
				{
					emp_name = "NIL";
					emp_rank = 0;
					cout << "Employ removed."<<endl;
				}
			}//end of most nested if
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
if(y == 'n')
{	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");

	//eighth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//22 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//23 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ." << endl;
			cout << "8. Employs list." << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			
			if(admin_employ == 8)
			{
				//24 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
			    cout << "Main Menu > Employ List" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Srno\t" << "Name\t" << "Rank" <<endl;
				cout << "1.  \t" << emp_name << "\t" << emp_rank << endl;	
			}//end of most nested if
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//nineth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//25 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//25 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ." << endl;
			cout << "8. Employs list." << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 9)
			{
				//26 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
			    cout << "Main Menu > Assighn Tasks / Duties" << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Enter task 1 : ";
				cin >> task_1;
				cout << "Enter Task 1 time : ";
				cin >> task1_time;
				cout << "Enter task 2 : ";
				cin >> task_2;
				cout << "Enter Task 2 time : ";
				cin >> task2_time;
				cout << "Enter task 3 : ";
				cin >> task_3;
				cout << "Enter Task 3 time : ";
				cin >> task3_time;
				cout << "Enter task 4 : ";
				cin >> task_4;
				cout << "Enter Task 4 time : ";
				cin >> task4_time;
			}//end of most nested if
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//tenth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//27 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//28 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 1)
			{
				//29 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > Change Password" << endl;
				cout << "----------------------------------" << endl;
				
				cout << "Enter Previous Password : ";
				cin >> previous_pass;
				
				if(previous_pass == employ_p1)
				{
					cout << "Enter new password : ";
					cin >> employ_p1;
					cout << "Password updated." << endl;
				}
				else
				{
					cout << "You are log out!" << endl;
				}
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//eleventh header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//30 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//31 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 2)
			{
				//32 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > View salary" << endl;
				cout << "----------------------------------" << endl;
				
				cout << "Your salary status : " << emp_pay << endl;
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//twelveth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//32 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//33 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 3)
			{
				//34 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Your Grant / Reward or bonus : " << emp_reward << endl;
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//fourteenth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//34 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//35 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 4)
			{
				//36 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
				cout << "Your attendance : " << emp_attendance << endl;
				cout << "Your absence out of 30 : " << emp_absence << endl;
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//fifteenth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//37 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//38 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 5)
			{
				//39 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > View Deductions."<< endl;
				cout << "--------------------------------" << endl;
				cout << "Your deduction in salary : " << emp_deduct << endl;
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//sixteenth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//40 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//41 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 6)
			{
				//42 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;\
                
			   cout << "Main menu > View assighned Tasks / Duties." << endl;
			   cout << "----------------------------------------------" << endl;
			   if(task1_time > task2_time && task2_time > task3_time && task3_time > task4_time)
               {
                     cout<<"No  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"2. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"3. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"4. "<<task_4<<"\t\t"<<task4_time<<endl;
               }
               else if(task1_time > task2_time && task2_time > task4_time && task4_time > task3_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"2. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"3. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"4, "<<task_3<<"\t\t"<<task3_time<<endl;
               }
               else if(task1_time > task3_time && task3_time > task2_time && task2_time > task4_time)
               {
                     cout<<"No  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"2. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"3. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"4. "<<task_4<<"\t\t"<<task4_time<<endl;
               }
               else if(task1_time > task3_time && task3_time > task4_time && task4_time > task2_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"2. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"3. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"4. "<<task_2<<"\t\t"<<task2_time<<endl;
               }
               else if(task1_time > task4_time && task4_time > task3_time && task3_time > task2_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"2. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"3. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"4. "<<task_2<<"\t\t"<<task2_time<<endl;
               }
               else if(task1_time > task4_time && task4_time > task2_time && task2_time > task3_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"2. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"3. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"4. "<<task_3<<"\t\t"<<task3_time<<endl;
               }
               else if(task2_time > task1_time && task1_time > task3_time && task3_time > task4_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"2. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"3. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"4. "<<task_4<<"\t\t"<<task4_time<<endl;
               }
               else if(task2_time > task3_time && task3_time > task1_time && task1_time > task4_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"2. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"3. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"4. "<<task_4<<"\t\t"<<task4_time<<endl;
               }
               else if(task2_time > task4_time && task4_time > task3_time && task3_time > task1_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"2. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"3. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"4. "<<task_1<<"\t\t"<<task1_time<<endl;
               }
               else if(task2_time > task4_time && task4_time > task1_time && task1_time > task3_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"2. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"3. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"4. "<<task_3<<"\t\t"<<task1_time<<endl;
               }
			   else if(task2_time > task3_time && task3_time > task4_time && task4_time > task1_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"2. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"3. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"4. "<<task_3<<"\t\t"<<task1_time<<endl;
               }
			   else if(task2_time > task1_time && task1_time > task4_time && task4_time > task3_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"2. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"3. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"4. "<<task_3<<"\t\t"<<task3_time<<endl;
               }
               else if(task3_time > task2_time && task2_time > task1_time && task1_time > task4_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"2. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"3. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"4. "<<task_4<<"\t\t"<<task4_time<<endl;
               }
               else if(task3_time > task2_time && task2_time > task4_time && task4_time > task1_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"2. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"3. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"4. "<<task_1<<"\t\t"<<task1_time<<endl;
               }
			   else if(task3_time > task4_time && task4_time > task1_time && task1_time > task2_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"2. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"3. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"4. "<<task_2<<"\t\t"<<task2_time<<endl;
               }
			   else if(task3_time > task4_time && task4_time > task2_time && task2_time > task1_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"2. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"3. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"4. "<<task_1<<"\t\t"<<task1_time<<endl;
               }
			   else if(task3_time > task1_time && task1_time > task4_time && task4_time > task2_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"2. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"3. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"4. "<<task_2<<"\t\t"<<task2_time<<endl;
               }
			   else if(task3_time > task1_time && task1_time > task2_time && task2_time > task4_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"2. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"3. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"4. "<<task_4<<"\t\t"<<task4_time<<endl;
               }
               else if(task4_time > task3_time && task3_time > task2_time && task2_time > task1_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"2. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"3. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"4. "<<task_1<<"\t\t"<<task1_time<<endl;
               }
               else if(task4_time > task3_time && task3_time > task1_time && task1_time > task2_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"2. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"3. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"4. "<<task_2<<"\t\t"<<task2_time<<endl;
               }
			   else if(task4_time > task2_time && task2_time > task1_time && task1_time > task3_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"2. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"3. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"4. "<<task_3<<"\t\t"<<task3_time<<endl;
               }
			   else if(task4_time > task2_time && task2_time > task3_time && task3_time > task1_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"2. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"3. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"4. "<<task_1<<"\t\t"<<task1_time<<endl;
               }
			   else if(task4_time > task1_time && task1_time > task2_time && task2_time > task3_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"2. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"3. "<<task_2<<"\t\t"<<task2_time<<endl;
                     cout<<"4. "<<task_3<<"\t\t"<<task3_time<<endl;
               }
			   else if(task4_time > task1_time && task1_time > task3_time && task3_time > task2_time)
               {
                     cout<<"NO  Task \t\t"<<"Task time"<<endl;
                     cout<<"1. "<<task_4<<"\t\t"<<task4_time<<endl;
                     cout<<"2. "<<task_1<<"\t\t"<<task1_time<<endl;
                     cout<<"3. "<<task_3<<"\t\t"<<task3_time<<endl;
                     cout<<"4. "<<task_2<<"\t\t"<<task2_time<<endl;
               }
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	
	//seventeenth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//43 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//44 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 7)
			{
				//45 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main menu > Completed Tasks / Duties." << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Enter no of completed tasks : ";
	            cin >>  emp_comp_task;
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//eighteenth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//46 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//47 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 10)
			{
				//48 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > Changes by Employ." << endl;
				cout << "----------------------------" << endl;
				
				if(employ_p1 != 12345678)
				{
					cout << "Employ changed his password to : " << employ_p1 << endl;
				}
				else
				{
					cout << "No change by employ." << endl;
			    }
		    }
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//nineteenth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//49 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//50 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 11)
			{
				//51 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > Employ Performance." << endl;
				cout << "----------------------------" << endl;
				cout << "No of task completed by employ : " << emp_comp_task << endl;
		    }
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//nineteenth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//52 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//53 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 12)
			{
				//54 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > Change Password of employ." << endl;
				cout << "----------------------------" << endl;
				cout << "Do you wanna change password of employ (y or n) : " ;
				cin >> x;
				
				if(x == 'y')
				{
					cout << "Enter new employ password : ";
					cin >> employ_p1;
					cout << "Password updated!"; 
				}
		    }
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//twenty header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//55 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//56 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give Promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 13)
			{
				//57 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > Give Promotion." << endl;
				cout << "----------------------------" << endl;
				cout << "Enter new employ rank : ";
				cin >> emp_rank;
		    }
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");

		cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	//if user enter admin
	if(admin_employ == 1)
	{
		//55 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//admin user and password
		cout << "Admin enter username : ";
		cin >> admin_user;
		cout << "Admin enter password : ";
		cin >> admin_password;
		system("cls");
		
		if(admin_user == "Admin" && admin_password == admin_p1)
		{
			//56 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Add Employ." << endl;
			cout << "2. Assign Username / Password to Employ." << endl;
			cout << "3. Release Pay." << endl;
			cout << "4. Grant / Reward or Bonus." << endl;
			cout << "5. Attendance." << endl;
			cout << "6. Deductions." << endl;
			cout << "7. Remove Employ" << endl;
			cout << "8. Employ List" << endl;
			cout << "9. Assighn Tasks / Duties" << endl;
			cout << "10. Changes by Employ." << endl;
			cout << "11. Employ Performance." << endl;
			cout << "12. Change Password of employ." << endl;
			cout << "13. Give Promotion." << endl;
			cout << "14. History of employ."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 14)
			{
				//57 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main Menu > History of employ." << endl;
				cout << "----------------------------" << endl;
				cout << "Enter rank of employ : ";
				cin >> emp_rank1;
				cout << "Enter work experience : ";
				cin >> we_years;
				cout << "Enter Your remarks : ";
				cin >> remarks;
		    }
		}//end of nested if
		else
		{
			//if user enter wrong username or password
			cout << "invalid username or password.";
		}//end of nested else
	}//end of if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//twentyoneth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//58 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//59 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 8)
			{
				//60 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main menu > View your Balance." << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Your Salary : " << emp_pay << endl;
				cout << "Your bonus : " << emp_reward << endl;
				cout << "your deductions : " << emp_deduct << endl;
				int balance = emp_pay + emp_reward - emp_deduct;
				cout << "Your balance : " <<balance;
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
	
	//twentytwoth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//61 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//62 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 9)
			{
				//63 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main menu > See your Status." << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Your name : " << emp_name << endl;
				cout << "Your rank : " << emp_rank << endl;
				cout << "Your Salary : " << emp_pay << endl;
				cout << "Your bonus : " << emp_reward << endl;
				cout << "your deductions : " << emp_deduct << endl;
				int balance = emp_pay + emp_reward - emp_deduct;
				cout << "Your balance : " <<balance;
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");

		//twentytwoth header 
	cout<<"*******************************************************"<<endl;
    cout<<"*              Employ Managment System                *"<<endl;
    cout<<"*******************************************************"<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;
	
	//For login
    cout << "Login" << endl;
    cout << "----------------" << endl;
    cout << "Select one of the following." << endl;
    cout << "1. Admin Login." << endl;
    cout << "2. Employ login." << endl;
    cout << "Select one option : ";
	cin >> admin_employ;
	system("cls");
	
	if(admin_employ == 2)
	{
		//61 header 
	    cout<<"*******************************************************"<<endl;
        cout<<"*              Employ Managment System                *"<<endl;
        cout<<"*******************************************************"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        
		//for employ login
		cout << "Employ enter username : ";
		cin >> employ_user;
		cout << "Employ enter password : ";
		cin >> employ_password;
		system("cls");
		
		if(employ_user == "Employ" && employ_password == employ_p1)
		{
			//62 header 
	        cout<<"*******************************************************"<<endl;
            cout<<"*              Employ Managment System                *"<<endl;
            cout<<"*******************************************************"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            
			cout << "Main Menu." << endl;
			cout << "--------------" << endl;
			cout << "Select one of the following." << endl;
			cout << "1. Change password." << endl;
			cout << "2. View salary." << endl;
			cout << "3. view Grant / Reward or Bonus." << endl;
			cout << "4. View Attendance." << endl;
			cout << "5. View Deductions." << endl;
			cout << "6. View assighned Tasks / Duties." << endl;
			cout << "7. Completed Tasks / Duties." << endl;
			cout << "8. View your Balance." << endl;
			cout << "9. View your status." << endl;
			cout << "10. see your history."<< endl;
			cout << "Select one option : ";
	        cin >> admin_employ;
			system("cls");
			
			if(admin_employ == 10)
			{
				//63 header 
	            cout<<"*******************************************************"<<endl;
                cout<<"*              Employ Managment System                *"<<endl;
                cout<<"*******************************************************"<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                
				cout << "Main menu > See your history." << endl;
				cout << "-----------------------------------------" << endl;
				cout << "Your experience : " << we_years << endl;
				cout << "your rank : " << emp_rank1 << endl;
				cout << "Remarks of admin : " << remarks << endl;
			}
		}
	}//end of else if
	else
	{
		cout << "Invalid operation";
	}
	
	cout << "To continue Enter any character : ";
	cin >> x;
	system("cls");
 }
 else
 {
	 cout << "Employ is remove execute program again if you want.";
 }
}