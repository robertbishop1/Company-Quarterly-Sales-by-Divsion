#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;


double getSales() {
    double sales;
    cin >> sales;
    if(sales < 0) {
        cout << "Error, sales must be 0 or larger" << endl;
        return 0;
    }
        return sales;
}

int main() {
    double northDiv, southDiv, eastDiv, westDiv, northWestDiv, northEastDiv,
            southWestDvi, southEastDiv;

    cout << "Enter North Divisions total sales for the quarter:";
    northDiv = getSales();
    cout << northDiv;

    return 0;
}

void findHighest();
