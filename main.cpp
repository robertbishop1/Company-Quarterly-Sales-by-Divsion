#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;


double getSales() {
    double sales;
    
    cin >> sales;

    while(sales < 0){
        cout << "Error number must be 0 or larger.";
        cin >> sales;
    }

    while (sales >= 0){
        return sales;
    }



}

int main() {
    double northDiv, southDiv, eastDiv, westDiv, northWestDiv, northEastDiv,
            southWestDvi, southEastDiv;

    cout << "Enter North's quarterly sales:";
    northDiv = getSales();
    cout << "Enter South's quarterly sales:";
    southDiv = getSales();
    cout << "Enter East's quarterly sales:";
    eastDiv = getSales();
    cout << "Enter West's quarterly sales:";
    westDiv = getSales();

    return 0;
}

void findHighest();
