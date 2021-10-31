/*
Copy Constructor --
let s1 have age as 10 and rollNo as 24, and now we want to create s2 such that it has same values
one way ->  s2.age = s1.age; and s2.rollNo = s1.rollNo; ,,,else we can also use copy assignment operator (i.e, s2 = s1), which ultimately meant the same (s2.age = s1.age; and s2.rollNo = s1.rollNo;)
NOTE: we can use s2 = s1; only if s2 is created before with some values present in s2.
But , using creating s2, copy constructor it will be more easy; we can call copy constructor as --
student s2(s1); // this will make copy of s1 as s2 will all properties and values of s1.
internally,, student s2(s1); is interpreted as s2.student(s1);
*/

#include<iostream>
using namespace std;

class student {
    public :
    int age;
    int rollNo;
    student(int age, int rollNo){
        this->age = age;
        // must check the results after removing 'this' from the code, u find garbage values in s2 (now the logic of using 'this' might get clear)
        this->rollNo = rollNo;
        //cout << age << " " << rollNo << endl;
        // remove below cout lines in int main() and add above line then observe the results----
    }
};

int main(){
    student s1(10,1001);
    student s2(s1);
    student *s3 = new student(s1);
    student s4(*s3);                                        // copy of heap stored in local memory
    student *s5 = new student(*s3);            // copy of heap stored in heap memory
    cout << s2.age << " " << s2.rollNo << endl;
    cout << (*s3).age << " " << s3->rollNo << endl;
    cout << s4.age << " " << s4.rollNo << endl;
    cout << s5->age << " " << s5->rollNo << endl;
}
