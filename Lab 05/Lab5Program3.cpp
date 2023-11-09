#include <iostream>
using namespace std;

int main() {
    double assignmentScore, labScore, midtermScore, finalScore;
    
    cout << "Enter your assignment score: ";
    cin >> assignmentScore;
    
    cout << "Enter your lab score: ";
    cin >> labScore;
    
    cout << "Enter your midterm exam score: ";
    cin >> midtermScore;
    
    cout << "Enter your final exam score: ";
    cin >> finalScore;

    // Calculate the total score based on the grading criteria
    double totalScore = 0.2 * assignmentScore + 0.2 * labScore + 0.3 * midtermScore + 0.3 * finalScore;

    char grade;
    
/*    if (totalScore >= 90) {
        grade = 'A';
    } else if (totalScore >= 80) {
        grade = 'B';
    } else if (totalScore >= 70) {
        grade = 'C';
    } else if (totalScore >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    } */

/*The condition above works fine but it's prone to errors*/

if (totalScore >= 90 && totalScore <= 100) {
        grade = 'A';
    } else if (totalScore >= 80 && totalScore < 90) {
        grade = 'B';
    } else if (totalScore >= 70 && totalScore < 80) {
        grade = 'C';
    } else if (totalScore >= 60 && totalScore < 70) {
        grade = 'D';
    } else {
        grade = 'F';
    }
    cout << "Your total score is " << totalScore << " and your grade is " << grade << "." << endl;
    
    return 0;
}
