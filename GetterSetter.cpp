#include <iostream>
using namespace std;
#include "2_GetterSetter_ClassFile.cpp"

int main(){
    Student s1;
    s1.name = "bhavy";
    s1.RollNo = 23;
    s1.setRegestrationNo(209309023,"TMKOC");
    s1.setCloseFriendName("vansh", 1234);
    cout << s1.name <<" " <<s1.RollNo <<" " << s1.getRegestrationNo() <<" " << s1.getCloseFriendName() << endl;

    Student *s6 = new Student;
    s6->name = "Rohit";
    s6->RollNo = 24;
    s6->setRegestrationNo(209309024,"TMKOC");
    s6->setCloseFriendName("Toxic_tech",1234);

    cout << s6->name << " " << (*s6).RollNo << " " << s6->getRegestrationNo() << " " << s6->getCloseFriendName();
}
