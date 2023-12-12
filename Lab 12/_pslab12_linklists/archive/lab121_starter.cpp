//==========================================================
//lab121.cpp
//1.print list of names
//2.insert "Syms" after "Fitzroy" and print
//3.delete "Wallace" and print
//4.delete all nodes in the list
//==========================================================
#include <iostream>
#include <string>
using namespace std;
struct Node {
    string name;
    Node *next;
};
typedef Node* pNODE;
void printList(pNODE pList);

int main()
{
    pNODE pList; //pointer to head of list
    pNODE pTemp; //temp pointer to Node
    printf("\n");

    pList = new Node; //new node is head of list
    pList->name = "Darwin"; //new node name=darwin

    pTemp = new Node; //temp pointer to new node
    pTemp->name = "Fitzroy"; //assign fitzroy to new node
    pList->next = pTemp; //assign pointer to new node to darwin node

    pTemp->next = new Node; //fitzroy pointer to new node
    pTemp = pTemp->next;    //pTemp = new node
    pTemp->name = "Wallace"; //assign wallace to new node
    pTemp->next = NULL;

    printList(pList);
    printf("\n");
    return 0;
}

void printList(pNODE pList) {
    for (pNODE pn=pList; pn != NULL; pn=pn->next)
            printf("name=%s\n", (*pn).name.c_str());
}
