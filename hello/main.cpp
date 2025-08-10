#include "hello.h"

int main() {

    Student sriram( 1000, "Sriram", "BE", "1st", "CIT", "Anna University"  );
    sriram.printDetails();
    Student nitesh;
    nitesh.setDetails( 2000, "Nitesh", "Btech", "4th", "VIT", "VIT" );
    nitesh.printDetails();
    Student *ptrMeena = new Student( 3000, "Meena", "MCA", "6th", "BC", "BC" );
    ptrMeena->printDetails();
    delete ptrMeena;
    cout << sriram.studentID << endl;
    return 0;
}
