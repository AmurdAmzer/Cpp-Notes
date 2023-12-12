//================================================================
//_colours_slist.cpp  //singly linked list, ira pohl
//================================================================
#include <iostream>
#include <string>
#include "assert.h"
using namespace std;
//================================================================
struct node {
   string data;
   node*  next;
};
typedef node* pNODE;
//================================================================
class slist {             //singly linked list
private:
    pNODE  pList;         //head of slist
public:
    slist() : pList(nullptr) { //default constructor
        printf("constructing instance of slist : pList=nullptr...\n");
    }
    ~slist() ;            //destructor
    void  printList(string heading);
    void  appNode(string newcolor);
    void  insColor(string color, string newcolor);
    //push adds new node to top
    //pops top node (removes and returns)
};//slist
//================================================================
slist::~slist() {
    node* current = pList;
    while( current != NULL ) {
        node* pb = current;
        current = current->next;
        printf("\tdeleting %s...\n", (*pb).data.c_str());
        delete pb;
    }
}

//push adds new node to top
//push(string s) {
    //...
//}

//pops top node (removes and returns)
//pop {
    //...
    //return top; //node
//}

void slist::printList(string heading) {
    int count=0;
    printf("\n\t#%s\n\t#", heading.c_str());
    for (unsigned int i=0; i<heading.size(); i++) printf("=");
    printf("\n");
    for (pNODE pn=pList; pn != nullptr; pn=pn->next) {
        printf("\tcolor=%s\n", (*pn).data.c_str());
        count++; if (count >= 12) break;
    }
    printf("\n\n");
}//printList

//insert "newcolor" after "color"
void slist::insColor(string color, string newcolor) {
    pNODE pcur;
    for (pcur=pList; pcur != nullptr; pcur=pcur->next) { //find "s1"
        //printf("pcur->data=%s\n", pcur->data.c_str());
        if (pcur->data==color) break;
    }

    if (pcur != nullptr && pcur->data==color) {
        pNODE pnewnode = new node;
        pnewnode->data = newcolor;   //newcolor="indigo"
        pnewnode->next = pcur->next; //direct pnew to old next
        pcur->next = pnewnode;       //update old next to pnew
    }
}//insColor

//append nodes to top of list
void slist::appNode(string newcolor) {
    pNODE pnew = new node;
    pnew->data = newcolor;
    pnew->next = nullptr;
    if (pList == nullptr)
        pList = pnew;
    else {
        for (pNODE pcur=pList; pcur != nullptr; pcur = pcur->next) {
            //printf("#curdata=%s\n", (*pcur).data.c_str());
            if (pcur->next == nullptr) {
                pcur->next = pnew; //append new node
                break;
            }
        }
    }
}//appNode

int main() {
    slist colours;

    colours.appNode("green");
    colours.appNode("blue");
    colours.appNode("violet");
    colours.printList("print list:");

    printf("#insert indigo after blue...\n");
    colours.insColor("blue", "indigo");

    colours.printList("print list:");

    //printf("#test pop, push member functions...\n");
    //call colours.pop() and print...
    //call colours.push("red")...

    printf("\n");
    return 0;
}//main

