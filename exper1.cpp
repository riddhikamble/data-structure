#include <iostream>
using namespace std;


struct Student
{
    int rollNo;
    char name[50];
    float marks;
};


void inputStudent(Student *s)
{
    cout << "Enter Roll Number: ";
    cin >> s->rollNo;

    cout << "Enter Name: ";
    cin >> s->name;

    cout << "Enter Marks: ";
    cin >> s->marks;
}

// Function to display student details
void displayStudent(Student *s)
{
    cout << "\nRoll Number: " << s->rollNo;
    cout << "\nName: " << s->name;
    cout << "\nMarks: " << s->marks;
    cout << "\n----------------------";
}

int main()
{
    
    Student students[50];

    int n;

    cout << "Enter number of students: ";
    cin >> n;

  
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        inputStudent(&students[i]);
    }

    cout << "\n\n===== STUDENT RECORDS =====";

    for (int i = 0; i < n; i++)
    {
        displayStudent(&students[i]);
    }

    return 0;
}
