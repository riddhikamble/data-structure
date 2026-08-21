#include<iostream>
using namespace std;

string arr[5];
int top = -1;

void push(string page) {
    arr[++top] = page;
}

void pop() {
    cout << "Back: " << arr[top--] << endl;
}


struct Node {
    string page;
    Node* next;
};

int main() {
    
    push("Google");
    push("YouTube");
    push("Instagram");

    cout << "Array Stack:\n";
    pop();
    pop();

    
    Node* top1 = NULL;

    Node* n1 = new Node{"Google", top1};
    top1 = n1;

    Node* n2 = new Node{"YouTube", top1};
    top1 = n2;

    cout << "\nLinked List Stack:\n";
    cout << "Back: " << top1->page << endl;

    return 0;
}
