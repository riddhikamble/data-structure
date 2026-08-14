#include <iostream>
using namespace std;

struct Employee
{
    int id;
    char name[20];
    Employee *next;
};

Employee *head = NULL;


void insert()
{
    Employee *newnode = new Employee;

    cout << "Enter ID: ";
    cin >> newnode->id;

    cout << "Enter Name: ";
    cin >> newnode->name;

    newnode->next = NULL;

    if (head == NULL)
        head = newnode;
    else
    {
        Employee *temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newnode;
    }

    cout << "Employee inserted\n";
}


void display()
{
    Employee *temp = head;

    if (head == NULL)
    {
        cout << "List is empty\n";
        return;
    }

    while (temp != NULL)
    {
        cout << "\nID: " << temp->id;
        cout << "\nName: " << temp->name << endl;

        temp = temp->next;
    }
}


void search()
{
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    Employee *temp = head;

    while (temp != NULL)
    {
        if (temp->id == id)
        {
            cout << "Employee Found\n";
            cout << "Name: " << temp->name << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Employee Not Found\n";
}


void del()
{
    int id;
    cout << "Enter ID to delete: ";
    cin >> id;

    Employee *temp = head;
    Employee *prev = NULL;

    while (temp != NULL && temp->id != id)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Employee Not Found\n";
        return;
    }

    if (prev == NULL)
        head = temp->next;
    else
        prev->next = temp->next;

    delete temp;

    cout << "Employee Deleted\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Employee Management ---";
        cout << "\n1. Insert";
        cout << "\n2. Display";
        cout << "\n3. Search";
        cout << "\n4. Delete";
        cout << "\n5. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
            insert();
        else if (choice == 2)
            display();
        else if (choice == 3)
            search();
        else if (choice == 4)
            del();
        else if (choice == 5)
            cout << "Exit";
        else
            cout << "Invalid choice";

    } while (choice != 5);

    return 0;
}
