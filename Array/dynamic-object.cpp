#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int roll;
    Student(int roll)
    {
        this->roll = roll;
    }
    void print()
    {
        cout << "Roll : " << roll << endl;
    }
};

void fun(Student *obj){
    obj->roll = 100;
}

int main()
{
    // Student obj(10);
    // Student obj = Student(10);
    Student *obj = new Student(10);
    cout << obj->roll << endl;
    obj->print();
    fun(obj);
    obj->print();
    return 0;
}