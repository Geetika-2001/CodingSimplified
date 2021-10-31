#include<iostream>
using namespace std;

class student {
    public :
    string name;
    int age;
    ~student(){
        cout << "destructor is called" << endl;
    }
};

int main(){
    student s1;
    student s2(s1);
    student *s3 = new student(s2);  
    // getting only two times "destructor is called", reason is we need to delete this one explicitely as it was created in heap memory.
    delete s3;
}
