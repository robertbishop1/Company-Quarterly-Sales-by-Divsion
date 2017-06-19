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
        cout << "Error number must be 0 or larger.\n";
        cout << "Enter " << divName << " quarterly sales:" << endl;
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
    northWestDiv = getSales("North West");
    northEastDiv = getSales("North East");
    southWestDvi = getSales("South West");
    southEastDiv = getSales("South East");
    

    return 0;
}

void findHighest();
