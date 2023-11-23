#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
    string movieName;
    string mpaaRating;
    int oneStarCount;
    int twoStarCount;
    int threeStarCount;
    int fourStarCount;
    int fiveStarCount;

public:
    // Constructor to initialize movie name, MPAA rating, and review counts
    Movie(string name, string rating)
        : movieName(name), mpaaRating(rating),
          oneStarCount(0), twoStarCount(0), threeStarCount(0),
          fourStarCount(0), fiveStarCount(0) {}

    // Accessor and mutator functions for movie name
    string getMovieName() const {
        return movieName;
    }

    void setMovieName(string name) {
        movieName = name;
    }

    // Accessor and mutator functions for MPAA rating
    string getMpaaRating() const {
        return mpaaRating;
    }

    void setMpaaRating(string rating) {
        mpaaRating = rating;
    }

    // Function to add a review
    void addReview(int stars) {
        if (stars >= 1 && stars <= 5) {
            switch (stars) {
                case 1:
                    oneStarCount++;
                    break;
                case 2:
                    twoStarCount++;
                    break;
                case 3:
                    threeStarCount++;
                    break;
                case 4:
                    fourStarCount++;
                    break;
                case 5:
                    fiveStarCount++;
                    break;
            }
        } else {
            cout << "Invalid review! Please provide a rating between 1 and 5." << endl;
        }
    }

    // Function to calculate the average stars
    double getAvgStars() const {
        int totalReviews = oneStarCount + twoStarCount + threeStarCount +
                           fourStarCount + fiveStarCount;
        if (totalReviews == 0) {
            return 0.0; // To handle division by zero
        }
        double avgStars = (oneStarCount + 2 * twoStarCount + 3 * threeStarCount +
                           4 * fourStarCount + 5 * fiveStarCount) / static_cast<double>(totalReviews);
        return avgStars;
    }
};

int main() {
    Movie movie1("Interstellar", "PG-13");
    movie1.addReview(1); // Terrible
    movie1.addReview(2); // Bad
    movie1.addReview(3); // OK
    movie1.addReview(4); // Good
    movie1.addReview(5); // Great

    Movie movie2("Toy Story 3", "G");
    movie2.addReview(1); // Terrible
    movie2.addReview(2); // Bad
    movie2.addReview(3); // OK
    movie2.addReview(4); // Good
    movie2.addReview(5); // Great

    cout << movie1.getMovieName() << " " << movie1.getMpaaRating() << " " << movie1.getAvgStars() << endl;
    cout << movie2.getMovieName() << " " << movie2.getMpaaRating() << " " << movie2.getAvgStars() << endl;

    return 0;
}
