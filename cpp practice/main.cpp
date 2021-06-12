#include<iostream.h>
 class student
 {

     int roll;
     char grade;
     float per;

 public:
    void get();
    void show();

 };
void student::get()
{

    cout<<"enter your name grade and percentage";
    cin>>roll>>grade>>per;

}
void student::show()
{

    cout<<"your roll no is"<<endl<<roll<<"yur grade is"<<endl<<grade<<"your percentage is"<<endl<<per;

}
int main()
{
     student s;
     s.get();
     s.show();
     return 0;

}
