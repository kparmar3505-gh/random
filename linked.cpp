#include <iostream>
using namespace std;

struct Node {
    int roll;
    string name;
    Node* next;
};

Node* head = NULL;

// Function to insert a record
void insertRecord(int r, string n) {
    Node* newNode = new Node;

    newNode->roll = r;
    newNode->name = n;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    }
    else {
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Record inserted successfully\n";
}

// Function to display all records
void displayRecords() {
    Node* temp = head;

    cout << "\nStudent Records:\n";

    while (temp != NULL) {
        cout << "Roll: " << temp->roll
             << ", Name: " << temp->name << endl;

        temp = temp->next;
    }
}

// Function to search a record
void searchRecord(int r) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->roll == r) {
            cout << "Record Found!\n";
            cout << "Name: " << temp->name << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Record not found\n";
}

int main() {
    insertRecord(101, "Amit");
    insertRecord(102, "Rahul");
    insertRecord(103, "Kajal");

    displayRecords();

    searchRecord(102);

    return 0;
}