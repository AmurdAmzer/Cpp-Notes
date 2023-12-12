//===============================================================
// _unit12-pList.cpp
//===============================================================
#include <iostream>
#include <string>
using namespace std;

struct Node {
    int data;
    Node *next;
};
typedef Node* NodePtr;
void printList(NodePtr head);
void insNode(NodePtr& head, int newnum);

int main() {
    NodePtr pList = nullptr, pn; //head, pointer
    printf("\n");

    pList = new Node;
    (*pList).data = 10;
    (*pList).next = nullptr;
    //"*" dereference operator means contents-of, "." member-of
    printf("\nfirst node data=%d\n", (*pList).data);

    pn = new Node;
    pn->data = 12;
    //reassigning the next field of pList
    //focus on the next field as a pointer, not what it is pointing to
    pList->next = pn;

    pn->next = new Node;
    pn = pn->next;
    pn->data = 14;
    pn->next = nullptr;

    printList(pList); //diagram
    insNode(pList,5);
    printList(pList);
    return 0;
}
void printList(NodePtr head) {
    printf("\n");
    for (NodePtr pn = head; pn != nullptr; pn = pn->next) {
        printf("\t%d, ", pn->data);
    }
}

void insNode(NodePtr& head, int newnum) {
    NodePtr pn = new Node;
    pn->data = newnum;
    pn->next = head;
    //printList(pn);
    head = pn;
}
