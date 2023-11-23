#include <iostream>
#include <cstring>

using namespace std;

// Function to check if a given string is a palindrome
bool isPalindrome(char* cstr) {
    // Initialize two pointers, front and back, to the beginning and end of the string
    char* front = cstr;
    char* back = cstr + strlen(cstr) - 1;

    // Continue looping until the front pointer is less than the back pointer
    while (front < back) {
        // If the characters at the front and back are not the same, the string is not a palindrome
        if (*front != *back) {
            return false; // Return false if a mismatch is found
        }
        
        // Move the front pointer forward and the back pointer backward to compare the next characters
        front++;
        back--;
    }

    // If the loop completes without finding any mismatches, the string is a palindrome
    return true; // Return true if no mismatches are found
}

int main() {
    char s1[50] = "neveroddoreven";
    char s2[50] = "notapalindrome";
    
    // Test the isPalindrome function with sample strings and print the results
    cout << isPalindrome(s1) << endl; // true (it's a palindrome)
    cout << isPalindrome(s2) << endl; // false (it's not a palindrome)

    return 0;
}
