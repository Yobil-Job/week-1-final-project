#include <iostream>
#include<vector>
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
int counti=0;
string *name=new string[100];
string *idno=new string[100];
string *department=new string[100];
string *password=new string[100];//admin give password for the student to accesses their own grade
string *courseName=new string[100];
string *sName=new string[100];
char   *gender=new char[100];
int    *year=new int[100];
float  *mark=new float[100];
long   *phone=new long[100];
string   *grade=new string[100];

int main()
{
    int logOption;

    cout<<"               #############################################"<<endl;
    cout<<"               ##### Student Management System Portal  #####"<<endl;
    cout<<"               #############################################"<<endl;
    cout<<endl;
    here:
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
                        goto here;
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
                            main();}

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
else{cout<<"Incorrect password"<<endl; main();
}
}

//--------------------------------------------

void instructor()
{
    string password;
cout<<"Enter password for Instructor"<<endl;
cin>>password;

if(password=="@Instructor"){
cout<<"############Instructor page############"<<endl;
cout<<"Redirecting to grade adding page..."<<endl;
addGrade();

}
else{cout<<"Incorrect password"<<endl;main();}
}
//---------------------------------------------------

void student(){
    int k;
cout<<"Wllcome"<<endl;
cout<<"do you want to continue press 1 to continue and other to stop"<<endl;
cin>>k;
if(k==1)
seeGrade();
else main();
}

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
//-----------------------------------------------------------------------

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
for(int i=0,j=1;i<counts;i++,j++){

cout<<j<<"||"<<"Name:"<<name[i]<<"|| Id: "<<idno[i]<<"|| Gender:"<<gender[i]<<"|| Department:"<<department[i]<<"|| phone number"<<phone[i]<<"|| Year:"<<year[i]<<endl;
}
}
admin();
}

//-------------------------------------------------------------------------------

void deleteStudent()//delete student information -->admin
{
    string a;
cout<<"#############Here you can delete students information#############"<<endl;
cout<<"Enter the id of student to delete the student information"<<endl;
cin>>a;
for(int i=0;i<counts;i++)
    {
    if(a==idno[i]){
            name[i]="deleted";
            idno[i]="deleted";
            gender[i]='-';
            department[i]="deleted";
            phone[i]=0000;
            year[i]=0000;


    }
    else{cout<<"Student with id "<<a<<" not found "<<endl;}
    }
    admin();
}

//----------------------------------------------------------------------

void searchStudent()//search individual student information--admin
{
    string a;
    cout<<endl;
cout<<"Search page"<<endl;
cout<<"###########Here you can search students by name########"<<endl;
cout<<"Enter name:";
cin>>a;
for(int i=0;i<counts;i++){
if(a==name[i])
       {
    cout<<"Name: "<<name[i]<<endl;
    cout<<"Id no: "<<idno[i]<<endl;
    cout<<"Gender: "<<gender[i]<<endl;
    cout<<"Department: "<<department[i]<<endl;
    cout<<"phone number: "<<phone[i]<<endl;
       }
 else{cout<<"Name not found"<<endl;}
}
main();
}
//------------------------------------------------------

void addGrade()//add grade for that course-->instructor
{

cout<<"Enter course name: "<<endl;
cin>>courseName[counti];
cout<<"Enter the student Name"<<endl;
cin>>sName[counti];
cout<<"Enter mark"<<endl;
cin>>mark[counti];
cout<<"you have successfully added student grade"<<endl;
counti++;
int a;
cout<<"Would you like to add another"<<endl;
cout<<"1.Yes"<<endl;
cout<<"2.No"<<endl;
cin>>a;
if(a==1)
instructor();
}
//------------------------------------------------------------

void viewGrades()//views the grades of all students-->admin
{
cout<<"############ Here you can view grades####################"<<endl;

for(int i=0,j=1;i<counti;i++,j++){
 if(mark[i]>=90)
   {
      grade[i]="A+";
   }
   else if(mark[i]>=85&&mark[i]<90)
   {
        grade[i]="A";
   }
    else if(mark[i]>=80&&mark[i]<85)
   {
        grade[i]="A-";
   }
    else if(mark[i]>=75&&mark[i]<80)
   {
        grade[i]="B+";
   }
    else if(mark[i]>=70&&mark[i]<75)
   {
        grade[i]="B";
   }
    else if(mark[i]>=65&&mark[i]<70)
   {
        grade[i]="B-";
   }
   else
   {
       grade[i]="F";
   }
     cout<<j<<"."<<sName[i]<<"        course name "<<courseName[i]<<" ->"<<grade[i]<<endl;
}

   cout<<"######################################################################"<<endl;
   main();

}

//---------------------------------------------------------------------------------------------------------------

void  seeGrade()//see grade and student information-->students
{
    string a,b;
cout<<"################# Student portal ###########"<<endl;
cout<<"Ënter your id"<<endl;
cin>>a;
cout<<"Enter your password to see your grades"<<endl;
cin>>b;
for(int i=0;i<counts;i++){
if(b==password[i]){
    if(a==idno[i]){ cout<<courseName[i]<<"-->"<<grade[i];}
}
}
main();
}
