#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    char name[20];
    float marks;
};

int main()
{
    Student s;

    cout << "Enter Roll Number: ";
    cin >> s.rollNo;

    cout << "Enter Name: ";
    cin >> s.name;

    cout << "Enter Marks: ";
    cin >> s.marks;

    cout << "\nStudent Details";
    cout << "\nRoll No: " << s.rollNo;
    cout << "\nName: " << s.name;
    cout << "\nMarks: " << s.marks;

    return 0;
}
