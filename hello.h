#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    string course;
    string college;
    string university;
    string semester;
public:
    Student();
    Student(int,string,string,string,string,string);
    ~Student();

    void setDetails( int, string, string, string, string, string );    
    void printDetails();
protected:
    int studentID;
};
