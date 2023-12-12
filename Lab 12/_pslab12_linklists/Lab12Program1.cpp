#include <iostream>
#include <string>

using namespace std;

// Node structure for the linked list
struct Node {
    string color;
    Node* next;
    
    // Constructor
    Node(string c) : color(c), next(nullptr) {}
};

// Linked list class
class LinkedList {
private:
    Node* head;

public:
    // Constructor
    LinkedList() : head(nullptr) {}

    // Function to insert a new node at the end of the list
    void insert(string color) {
        Node* newNode = new Node(color);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to delete a node with a specific color
    void deleteNode(string color) {
        Node* temp = head;
        Node* prev = nullptr;

        if (temp != nullptr && temp->color == color) {
            head = temp->next;
            delete temp;
            return;
        }

        while (temp != nullptr && temp->color != color) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == nullptr) {
            return;
        }

        prev->next = temp->next;
        delete temp;
    }

    // Function to display all colors in the list
    void displayList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->color << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to delete all nodes in the list
    void deleteAll() {
        Node* temp = head;
        Node* nextNode = nullptr;
        while (temp != nullptr) {
            nextNode = temp->next;
            delete temp;
            temp = nextNode;
        }
        head = nullptr;
    }
};

int main() {
    // Creating a linked list
    LinkedList colorsList;
    
    // Adding colors to the list
    colorsList.insert("red");
    colorsList.insert("green");
    colorsList.insert("blue");

    // Outputting all colors in the list
    cout << "Colors in the list: ";
    colorsList.displayList();

    // Inserting "indigo" after "blue" and outputting the modified list
    cout << "\nInserting 'indigo' after 'blue': ";
    colorsList.insert("indigo");
    colorsList.displayList();

    // Deleting the node with "violet" and outputting the modified list
    cout << "\nDeleting 'violet' (if exists): ";
    colorsList.deleteNode("violet");
    colorsList.displayList();

    // Deleting all nodes in the list
    cout << "\nDeleting all nodes in the list...\n";
    colorsList.deleteAll();
    cout << "Colors in the list after deletion: ";
    colorsList.displayList();

    return 0;
}
