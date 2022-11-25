#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>

using namespace std;
class student
{

private:
    string name,roll_no, course,address, email_id, contact_no;
public:
    void menu();
    void insert();
};
void student::menu()
{

    int choice;
    char x;
    system("cls");
    cout<<"\t\t\t\n-----------------------------"<<end1;
    cout<<"\t\t\t |STUDENT MANAGEMENT SYSTEM |"<<end1;
    cout<<"\t\t\t-----------------------------"<<end1;
   /* cout<<"\t\t\t\n 1. Enter New Record"<<end1;
    cout<<"\t\t\t 2. Display Record"<<end1;
    cout<<"\t\t\t 3. Modify Record"<<end1;
    cout<<"\t\t\t 4. Search Record"<<end1;
    cout<<"\t\t\t 5. Delete Record"<<end1;
    cout<<"\t\t\t 6. Exit"<<end1;

    cout<<"\t\t\t----------------"<<end1;
    cout<<"\t\t\t choose Option:[1//2/3/4/5/6"<<end1;
    cout<<"\t\t\t----------------"<<end1;
    cout<<"Enter your choose: "<<end1;
    cin>>choice;
    switch(choice)
    {
    case 1:
        insert();
        break;
    default:
        cout<<"\n\t\t\t Invalid choice...Please try again..."<<edn1;
        break;
    }
}
void student::insert()
{

    system("cls");
    fstream file;
    cout<<"\n----------------------------------------------";
    cout<<"\n--------------------------------Add Student Details------------------------"<<end1;
    cout<<"\t\t\t Enter Name: ";
    cin>>name;
    cout<<"\t\t\t Enter Roll NO: ";
    cin>>roll_no;
    cout<<"\t\t\t Enter Course: ";
    cin>>course;
    cout<<"\t\t\t Enter Email_ID: ";
    cin>>email_id;
    cout<<"\t\t\t Enter Contact_No.: ";
    cin>>contact_no;
    cout<<"\t\t\t Enter Address: ";
    cin>>address;
}*/
main()
{
    student project;
    project.menu();
    return 0;
}
