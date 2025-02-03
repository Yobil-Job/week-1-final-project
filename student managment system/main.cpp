#include <iostream>
using namespace std;
     void admin();
     void instructor();
     void student();
void addStudent();// add student-->admin
void viewStudent();//view students-->admin
void deleteStudent();//delete student information -->admin
void searchStudent();//search individual student information--admin
void viewGrades();//views the grades of all students-->admin
void addGrade();//add grade for that course-->instructor
void  seeGrade();//see grade and student information-->students
int counts=0;
string *name=new string[100];
string *idno=new string[100];
string *department=new string[100];
string *password=new string[100];//admin give password for the student to accesses their own grade
char   *gender=new char[100];
int    *year=new int[100];
long   *phone=new long[100];

int main()
{
    int logOption;

    cout<<"               #############################################"<<endl;
    cout<<"               ##### Student Management System Portal  #####"<<endl;
    cout<<"               #############################################"<<endl;
    cout<<endl;
    cout<<"Select a number with the applicable login page"<<endl;
    cout<<endl;
    cout<<"1.Admin Login"<<endl;
    cout<<"2.Instructor Login"<<endl;
    cout<<"3.Student Login"<<endl;
    cin>>logOption;
    switch(logOption)
                     {
                        case 1:  admin();
                        break;
                        case 2: instructor();
                        break;
                        case 3: student();
                        break;
                        default: cout<<"Invalid input"<<endl;return 0;
                        break;
                     }
    return 0;
}

//-------------------------------------------------------

void admin()
{
string password;
int taskOption;
cout<<"Enter password for admin"<<endl;
cin>>password;

if(password=="@Admin"){
cout<<"                    ######## welcome to admin page ######"<<endl;
cout<<"select from the menue"<<endl;
cout<<"1.add student"<<endl;
cout<<"2.view student"<<endl;
cout<<"3.delete student"<<endl;
cout<<"4.search student"<<endl;
cout<<"5.view greads"<<endl;
cout<<"press any other key to terminate"<<endl;
cin>>taskOption;
switch(taskOption)
                  {
                      case 1:{
                           addStudent() ;
                            counts++;
                            admin();}

                      break;
                      case 2: viewStudent() ;
                      break;
                      case 3: deleteStudent() ;
                      break;
                      case 4: searchStudent() ;
                      break;
                      case 5: viewGrades() ;
                      break;
                      default: cout<<"invalid selection EXITING..."<<endl;
                      break;
                  }
}
else{cout<<"Incorrect password"<<endl; admin();}
}

//--------------------------------------------

void instructor(){}

//---------------------------------------------------

void student(){}

//-----------------------------------

void addStudent()// add student-->admin
{
cout<<endl;
cout<<"This is a page to add students with ther information"<<endl;
cout<<endl;

cout<<"Enter name of the student"<<endl;
cin>>name[counts];
cout<<"Give id  for the student"<<endl;
cin>>idno[counts];
cout<<"Enter department for the student"<<endl;
cin>>department[counts];
cout<<"Enter a accesses password for the student"<<endl;
cin>>password[counts];
cout<<"Enter Gender of the student"<<endl;
cin>>gender[counts];
cout<<"Enter phne number of the student"<<endl;
cin>>phone[counts];
cout<<"Enter the  year of the student"<<endl;
cin>>year[counts];
cout<<endl;
cout<<"You have successfully added a student information"<<endl;


}


void viewStudent()//view students-->admin
{
cout<<endl;
cout<<"######## a portal to view  student information #######"<<endl;
if(name[0]==" ")
{
    cout<<"No student information found"<<endl;
    admin();
}else
{
for(int i=0;i<counts+1
;i++){

cout<<"Name:"<<name[i]<<"|| Id: "<<idno[i]<<"|| Gender:"<<gender[i]<<"|| Department:"<<department[i]<<"|| phone number"<<phone[i]<<"|| Year:"<<year[i]<<endl;
}
}

}

void deleteStudent(){}//delete student information -->admin
void searchStudent(){}//search individual student information--admin
void viewGrades(){}//views the grades of all students-->admin
void addGrade(){}//add grade for that course-->instructor
void  seeGrade(){}//see grade and student information-->students
