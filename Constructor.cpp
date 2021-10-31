/* Default Constructor --
As soon as we call "student s1;" what internally happens is , this is interpreted as s1.student();
and then all the properties(Name, RollNo ..) will be given to s1 by the default constructor
we can say the default constructor looks like---
student(){

}
and inside this all the properties are stored

** properties of Default Constrctor--
# Same name as Class
# No return type
# No input argument

NOTE: for every object that we create, in its lifetime construct must been called once to create that object itself along with properties if properties are present

if we create in heap then also constructor is called i.e,
student * s2 = new student;
s2->student() or (*s2).student()

NOTE: when we start writing our own constructor the inbuilt constructor get vanished and the one written by us is only the valid constructor then.

Lets create constructor----
*/

//-----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

class student {
    public :
    int age;

    // Default Constructor
    student(){
        cout << "Constructor is called" << endl;
    }

    // Parameterized Constructor
    student(int age) {
        age = age;
        cout << "Paramatrized Constructor is called "<< "age : " << age <<endl;
    }

};

int main(){
    student s1;
    student * s2 = new student;
    student s3(24);
    student *s4 = new student(20);

}
