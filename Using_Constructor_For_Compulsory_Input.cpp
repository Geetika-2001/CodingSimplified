#include <iostream>
using namespace std;

class student {
    public :
    string name;
    int age;
    student(string name,int age){    // doing this removed the default constructor & now 
        name = name;                              //everything works according to new constructor
        age = age;
        cout << name << endl;
        cout << age << endl;
    }
};

int main(){
    student s1("bhavy", 209309023);
    /*
    student s2("rohit");
    error : candidate expects 2 arguments, 1 provided
    
    student s3();
    nothing is changes in output
    */
    student *s4 = new student("vansh", 209302234);
}
