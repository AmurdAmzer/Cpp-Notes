//===============================================================
// lab12-linked-main.cpp
//===============================================================
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node *next;
};
typedef Node* NodePtr;
void printList(NodePtr head);

int main() {
    NodePtr pList, pn;
    pList = new Node;
    pList->data = "green";

    pn = new Node;
    pn->data = "blue";
    pList->next = pn;

    pn->next = new Node;
    pn = pn->next;
    pn->data = "violet";
    pn->next = nullptr;

    printList(pList);

    /* a. print list. */
    /*================*/
    cout << "\n#a. print list..." << endl;
    printList(pList);
    
    /* b. insert node "indigo" after "blue" and print list. */
    /*======================================================*/
    cout << "\n#b. insert indigo after blue..." << endl;
    



    printList(pList);
    
    /* c. delete node "violet" and print list. */
    /*=========================================*/
    cout << "\n#c. delete node violet..." << endl;
    NodePtr pb, discard;
    discard = pList;
    
    // search violet
    //while(                  && discard->next != nullptr){
        //...         //pb is set as node before discard
        //...
    }
    
    // delete violet
    if(discard->data == "violet"){
        //...           //advance pb over discard
        delete discard; // discard node violet
    } else
        cout << "violet does not exist." << endl;
    printList(pList);
    
    /* d. delete all nodes in the list. */
    /*===================================*/
    cout << "\n#d. delete all nodes in the list..." << endl;
    pn = pList;
    while(pn != nullptr){
        //...           //pb is set as node before pn
        //...
        printf("\tdeleting %s...\n", (*pb).data.c_str());
        delete pb;
    }
    cout << "\tall nodes are deleted.\n" << endl;
    return 0;
}
void printList(NodePtr head){
    //for (NodePtr pn = head;...
}
