#include "hello.h"

//Default constructor
//Constructor that allows to create an instance
//of Student without giving any arguments
Student::Student() {
    cout << "Default constructor Invoked" << endl;
}

//Overloaded constructor
//Constructor that takes arguments
Student::Student(
        int ID,
        string name,
        string course,
        string semester,
        string college,
        string university
        ) {
    cout << "Overloaded constructor Invoked" << endl;
    this->studentID = ID;
    this->name = name;
    this->course = course;
    this->semester = semester;
    this->college = college;
    this->university = university;
}

void Student::setDetails(
        int ID,
        string name,
        string course,
        string semester,
        string college,
        string university
        ) {
    this->studentID = ID;
    this->name = name;
    this->course = course;
    this->semester = semester;
    this->college = college;
    this->university = university;
}

void Student::printDetails() {
    cout << "Student ID            : " << this->studentID << endl;
    cout << "Name of the student   : " << this->name   << endl;
    cout << "Name of the course    : " << this->course << endl;
    cout << "Name of the college   : " << this->college << endl;
    cout << "Name of the university: " << this->university << endl;
}

Student::~Student() {
    cout << "Destructor Invoked!" << endl;
}
