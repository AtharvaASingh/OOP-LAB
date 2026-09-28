#include <iostream>
#include <string>
using namespace std;

class student
{
    private:
      int rollNumber;
      string name;
      string course;
    public:
    //constructor
    student(int rollNumber, string name, string course)
    {
        this->rollNumber = rollNumber;
        this->name = name;
        this->course = course;
    }
    //Display student details
    void displayDetails()
    {
        cout<<"Student Details"<<endl;
        cout<<"Roll Number: "<< rollNumber<< endl;
        cout<<"Name: "<< name<< endl;
        cout<<"Course: "<< course<< endl;
    }
};

int main()
{
    student s1(101,"Sahil","AIML");
    s1.displayDetails();
    return 0;
}
