#include <iostream>
#include <string>

using namespace std;

struct node {
    string data;
    node* next;
};
typedef node* pNODE;

class slist {
private:
    pNODE pList; // head of slist

public:
    // Constructor
    slist() {
        pList = nullptr;
    }

    // Destructor
    ~slist() {
        while (pList != nullptr) {
            pNODE temp = pList;
            pList = pList->next;
            delete temp;
        }
    }

    // Function to append a node to the end of the list
    void appNode(string newData) {
        pNODE newNode = new node;
        newNode->data = newData;
        newNode->next = nullptr;

        if (pList == nullptr) {
            pList = newNode;
        } else {
            pNODE temp = pList;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Function to print the list
    void printList(const string& message) {
        cout << message << endl;
        pNODE temp = pList;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to insert a new color after a specific color
    void insColor(const string& existingColor, const string& newColor) {
        pNODE temp = pList;
        while (temp != nullptr) {
            if (temp->data == existingColor) {
                pNODE newNode = new node;
                newNode->data = newColor;
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
        }
        cout << "Color '" << existingColor << "' not found in the list." << endl;
    }

    // Function to remove the first node from the list
    void pop() {
        if (pList != nullptr) {
            pNODE temp = pList;
            pList = pList->next;
            delete temp;
        } else {
            cout << "List is empty. Cannot pop." << endl;
        }
    }

    // Function to add a new color at the beginning of the list
    void push(const string& newData) {
        pNODE newNode = new node;
        newNode->data = newData;
        newNode->next = pList;
        pList = newNode;
    }
};

int main() {
    slist colours;

    colours.appNode("green");
    colours.appNode("blue");
    colours.appNode("violet");
    colours.printList("Print list:");

    cout << "#insert indigo after blue..." << endl;
    colours.insColor("blue", "indigo");

    colours.printList("Print list:");

    cout << "\n#test pop, push member functions..." << endl;
    colours.pop();
    colours.printList("List after pop:");

    colours.push("red");
    colours.printList("List after push:");

    cout << endl;
    return 0;
}
