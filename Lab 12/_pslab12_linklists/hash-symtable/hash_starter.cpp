//======================================================================
//hash.cpp
//macro preprocessor symbol table routines
//#define YES 1
//inword = YES;
//======================================================================
#include <iostream>
#include <string>
using namespace std;
struct nlist {
    string name;
    string defn;
    struct nlist *next;
};
//======================================================================
#define HASHSIZE 10
static struct nlist *hashtab[HASHSIZE]; //pointer table
//======================================================================
int gethash(string s);
int althash(string s);
void printTab();
struct nlist* findsym(string s);
struct nlist* installsym(string name, string defn);

int main() {
    string name = "a"; //try "ab"
    int hashval;

    hashval = gethash(name);
    printf("name=%s, hashval=%d\n\n", name.c_str(), hashval);
    printTab();
    printf("\n\n");

    installsym("yes","1");
    installsym("int_width","32");
    installsym("int_max","0x7fffffff");
    installsym("pi", "3.14");
    installsym("e", "2.72");
    installsym("x86_64", "1");
    installsym("ip", "10.55.10.254");
    installsym("little_indian","1234");
    installsym("big_indian","4321");
    installsym("pdp_indian","3412");
    installsym("adressof(v)","(&(v))");
    installsym("yes","2");
    printTab();
    printf("\n\n");
    return (0);
}

struct nlist* findsym(string s) {
    struct nlist *np;
    for (np=hashtab[gethash(s)]; //...; //...)
         //...
         //...
    return(NULL);
}

struct nlist* installsym(string name, string defn) {
    nlist *np;
    if ((np = findsym(name)) != NULL) //found
        //...         //supersede existing defn
    else { //not found
        np  = new nlist;
        //assign new values...
        //...
        //locate position in hashtab...
        //insert new nlist node at the head of list...
        //...
    }
    return (np);
}

void printTab() {
    nlist *np;
    for (int i=0; i<HASHSIZE; i++) {
        printf("\thashtab[%d]: ", i);
        for (np=hashtab[i]; //...; //...) {
            //...
        }
        printf("NULL\n");
    }
}

int gethash(string s) {
    int hashval=0;
    for (unsigned int i=0; i<s.size(); i++)
         hashval += s[i];
    return (hashval % HASHSIZE);
}

int althash(string s) {
    char *sp;
    int hashval=0;
    for (sp=(char *)s.c_str(); *sp != '\0'; sp++)
         hashval += *sp;
    return (hashval % HASHSIZE);
}
