#include <iostream>
using namespace std;

struct Song
{
    char name[20];
    Song *prev;
    Song *next;
};

Song *head = NULL;
Song *current = NULL;

void addSong()
{
    Song *newSong = new Song;

    cout << "Enter song name: ";
    cin >> newSong->name;

    newSong->next = NULL;
    newSong->prev = NULL;

    if (head == NULL)
    {
        head = newSong;
        current = newSong;
    }
    else
    {
        Song *temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newSong;
        newSong->prev = temp;
    }

    cout << "Song added\n";
}

void nextSong()
{
    if (current->next != NULL)
    {
        current = current->next;
        cout << "Playing: " << current->name << endl;
    }
    else
        cout << "No next song\n";
}

void previousSong()
{
    if (current->prev != NULL)
    {
        current = current->prev;
        cout << "Playing: " << current->name << endl;
    }
    else
        cout << "No previous song\n";
}

void display()
{
    Song *temp = head;

    cout << "\nPlaylist:\n";

    while (temp != NULL)
    {
        cout << temp->name << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main()
{
    int choice;

    do
    {
        cout << "\n1. Add Song";
        cout << "\n2. Display";
        cout << "\n3. Next";
        cout << "\n4. Previous";
        cout << "\n5. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        if (choice == 1)
            addSong();
        else if (choice == 2)
            display();
        else if (choice == 3)
            nextSong();
        else if (choice == 4)
            previousSong();

    } while (choice != 5);

    return 0;
}
