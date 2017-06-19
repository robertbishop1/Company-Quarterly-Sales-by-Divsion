#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::string;

string divName;

double getSales(string divName) {
    double sales;
    cout << "Enter " << divName << " quarterly sales:" << endl;
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


    northDiv = getSales("North");
    southDiv = getSales("South");
    eastDiv = getSales("East");
    westDiv = getSales("West");

    return 0;
}

void findHighest();
