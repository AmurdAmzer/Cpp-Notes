//==============================================================================
//towsonu_starter2.cpp
//line is implicit string object acted upon by member functions find and substr.
//string.find(str,pos) find location of str in string starting at position pos
//else return -1 if not found
//string.substr(pos,len) return substring from string from positions pos to len
//note: vector member functions are not required to complete this program
//==============================================================================
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string line; //lines of text read from ztowsonu.txt
    string text; //substrings located between parens in lines
    int oparen, cparen; //locations of open and closed parens

    ifstream fin("ztowsonu.txt");
    if(fin.fail()){
        cout << "Unable to read the file.";
        return -1;
    }

    getline(fin, line);
    int anchor = 0;  //start point for find search
    //while (-1 != (oparen = line.find("(", anchor))) {
        //find cparen...")"...
        anchor = cparen;
        text = line.substr(oparen+1, cparen-oparen-1);
        printf("text=%s\n", text.c_str());
    //}
    fin.close();
    return 0;
}
