//==============================================================================
//towsonu_starter1.cpp
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
    int anchor = 0;
    //while ((-1 != (<found_location> = line.find("x", <start_location>))) {
        //<close_location> = line.find("x", <start_location>);
        //reset anchor
        //<some_string> = line.substr(<start_location>, <end_location>);
        //printf("text=%s\n", <some_string>.c_str());
    //}
    fin.close();
    return 0;
}
