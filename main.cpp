#include <iostream>
#include <iomanip>
#include <string>

double northDiv, southDiv, eastDiv, westDiv, northWestDiv, northEastDiv,
        southWestDiv, southEastDiv;

double getSales(std::string divName) {
    double sales;
    // Gets the total for the division
    std::cout << " Enter " << divName << " quarterly sales:" << std::endl;
    std::cin >> sales;
    // User input validation which checks to make sure the input is greater
    // than 0 also repeates question to the user until valid
    while (sales < 0) {
        std::cout << "Error, sales must be 0 or larger\n";
        std::cout << "Enter " << divName << " quarterly sales:" << std::endl;
        std::cin >> sales;
    }
    // When valid we return the value back to the main function
    while (sales >= 0) {
        return sales;
    }
    return 0;
}
// This function will find which division had the most sales and print
void findHighest() {
    if (northDiv > southDiv && northDiv > eastDiv && northDiv > westDiv &&
            northDiv > northWestDiv && northDiv > northEastDiv && northDiv >
            southWestDiv && northDiv > southEastDiv)
        std::cout << "North has the largest sales with $" << std::fixed
                  << std::setprecision(2) << northDiv << std::endl;

    else if (southDiv > northDiv && southDiv > eastDiv && southDiv > westDiv
            && southDiv > northWestDiv && southDiv > northEastDiv &&
            southDiv > southEastDiv && southDiv > southWestDiv)
        std::cout << "South has the largest sales with $" << std::fixed
                  << std::setprecision(2) << southDiv << std::endl;

    else if (eastDiv > southDiv && eastDiv > westDiv && eastDiv > northDiv &&
            eastDiv > northEastDiv && eastDiv > northWestDiv && eastDiv >
            southWestDiv && eastDiv > southEastDiv)
        std::cout << "East has the largest sales with $" << std::fixed
                  << std::setprecision(2) << eastDiv << std::endl;

    else if (westDiv > northDiv && westDiv > southDiv && westDiv > eastDiv &&
            westDiv > northWestDiv && westDiv > northEastDiv && westDiv >
            southEastDiv && westDiv > southWestDiv)
        std::cout << "West has the largest sales with $" << std::fixed
                  << std::setprecision(2) << westDiv << std::endl;

    else if (northEastDiv > northDiv && northEastDiv > southDiv &&
            northEastDiv > eastDiv && northEastDiv > westDiv && northEastDiv >
            northWestDiv && northEastDiv > southWestDiv && northEastDiv >
            southEastDiv)
        std::cout << "Northeast has the largest sales with $" << std::fixed
                  << std::setprecision(2) << northEastDiv << std::endl;

    else if (northWestDiv > northDiv && northWestDiv > southDiv &&
            northWestDiv > eastDiv && northWestDiv > westDiv && northWestDiv >
            northEastDiv && northWestDiv > southEastDiv && northWestDiv >
            southWestDiv)
        std::cout << "Northwest has the largest sales with $" << std::fixed
                  << std::setprecision(2) << northWestDiv << std::endl;

    else if (southWestDiv > northDiv && southWestDiv > southDiv &&
            southWestDiv > eastDiv && southWestDiv > westDiv && southWestDiv
            > northWestDiv && southWestDiv > northEastDiv && southWestDiv >
            southEastDiv)
        std::cout << "Southwest has the largest sales with $" << std::fixed
                  << std::setprecision(2) << southWestDiv << std::endl;

    else
        std::cout << "Southeast has the largest sales with $" << std::fixed
             << std::setprecision(2) << southEastDiv << std::endl;
}

int main() {
// Calls getSales on each division
    northDiv = getSales("North's");
    southDiv = getSales("South's");
    eastDiv = getSales("East's");
    westDiv = getSales("West's");
    northEastDiv = getSales("Northeast's");
    southEastDiv = getSales("Southeast's");
    northWestDiv = getSales("Northwest's");
    southWestDiv = getSales("Southwest's");

    findHighest();

    // Pauses screen for viewing
    char pause = std::cin.get();
    std::cout << "Press Enter to quit. ";
    std::cin.get(pause);
    return 0;
}
