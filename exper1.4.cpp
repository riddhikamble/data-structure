#include <iostream>
using namespace std;

int main()
{
    int marks;
    int *ptr;

    cout << "Enter marks: ";
    cin >> marks;

    ptr = &marks;

    cout << "\nMarks: " << *ptr;

    return 0;
}
