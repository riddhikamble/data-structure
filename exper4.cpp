#include <iostream>
using namespace std;

struct Team
{
    char name[20];
    Team *next;
};

Team *head = NULL;

void insert()
{
    Team *newTeam = new Team;

    cout << "Enter team name: ";
    cin >> newTeam->name;

    if (head == NULL)
    {
        head = newTeam;
        newTeam->next = head;
    }
    else
    {
        Team *temp = head;

        while (temp->next != head)
            temp = temp->next;

        temp->next = newTeam;
        newTeam->next = head;
    }

    cout << "Team added successfully\n";
}


void display()
{
    if (head == NULL)
    {
        cout << "No teams available\n";
        return;
    }

    Team *temp = head;

    cout << "\nTeams:\n";

    do
    {
        cout << temp->name << " -> ";
        temp = temp->next;
    }
    while (temp != head);

    cout << "START\n";
}


void roundRobin()
{
    if (head == NULL)
    {
        cout << "No teams available\n";
        return;
    }

    Team *temp = head;

    cout << "\n--- Round Robin Schedule ---\n";

    do
    {
        cout << "Now playing: " << temp->name << endl;
        temp = temp->next;
    }
    while (temp != head);
}

int main()
{
    int choice;

    do
    {
        cout << "\n--- Tournament Menu ---";
        cout << "\n1. Add Team";
        cout << "\n2. Display Teams";
        cout << "\n3. Round Robin";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
            insert();
        else if (choice == 2)
            display();
        else if (choice == 3)
            roundRobin();
        else if (choice == 4)
            cout << "Program ended";
        else
            cout << "Invalid choice";

    }
    while (choice != 4);

    return 0;
}
