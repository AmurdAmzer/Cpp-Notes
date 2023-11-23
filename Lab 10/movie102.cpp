//==========================================================
//movie.cpp
//==========================================================
#include <iostream>
#include <cstdlib>
using namespace std;
enum movie_review_stars{TOTAL=0,TERRIBLE,BAD,OK,GOOD,GREAT};

class Movie {
private:
    string movie_name;
    string mpaa_rating; //g, pg, pg-13, r
    //review counts by number of stars [1..5], counts sum at [TOTAL]
    int movie_reviews[6];
    
public:
    Movie(string name, string mpaa);
    void setMovie(string name);
    string getMovie();
    void setMPAA(string mpaa);
    string getMPAA();
    void setReviews(int review_counts[], int Nstars);
    void addReview(int stars);
    double getAvgStars();
    void printMovie();
};//class_Movie

//...constructor... {
    //initialize object instance with incoming parameters
    //initialize movie_reviews[] member to 0s
//}
void Movie::setMovie(string name) {
    //...
}
//string Movie::getMovie...{
    //...
//}
void Movie::setMPAA(string mpaa) {
    //...
}
//string Movie::getMPAA... {
    //...
//}
void Movie::setReviews(int review_counts[], int Nstars) {
    //...
}
void Movie::addReview(int stars) {
    if (stars >= 1 && stars <= 5) {
        //...
    }
}
double Movie::getAvgStars() {
    double sum_rev_stars=0;
    int stars;
    for (int i=1; i<=5; i++) {
        //...
    }
    printf("\tsum_review_stars=%5.2f, reviews[0]=%d\n", sum_rev_stars, movie_reviews[TOTAL]);
    //return...
}
void Movie::printMovie() {
    printf("\tmovie_name: %s\n", movie_name.c_str());
    printf("\tmpaa_rating: %s\n", mpaa_rating.c_str());
    for (int i=1; i<=5; i++) {
        //printf("\t%d star reviews: %d\n"...
    }
    //printf("\tstars=%5.2f\n"...
}

//======================================================================
// main
//======================================================================
int main() {
    const int NSTARS=6;
    Movie m1("Third Man", "pg");
    int m1reviews[NSTARS] = {13,1,2,3,2,5}; //review counts
    m1.setReviews(m1reviews, NSTARS);

    Movie m2("Far Side of the World", "pg-13");
    int t2reviews[NSTARS] = {14,1,2,4,3,4}; //review counts
    m2.setReviews(t2reviews, NSTARS);

    //m1.add...
    //m2.add...

    printf("\n");
    //print m1...
    printf("\n");
    //print m2...
    printf("\n");
    return (0);
}
