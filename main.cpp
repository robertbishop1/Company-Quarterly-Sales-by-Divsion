#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::string;

string divName;
double northDiv, southDiv, eastDiv, westDiv, northWestDiv, northEastDiv,
            southWestDiv, southEastDiv;

double getSales(string divName) {
    double sales;
    cout << "Enter " << divName << " quarterly sales:" << endl;
    std::cin >> sales;

    while(sales < 0){
        cout << "Error number must be 0 or larger.\n";
        cout << "Enter " << divName << " quarterly sales:" << endl;
        std::cin >> sales;
    }

    while (sales >= 0){
        return sales;
    }
    return 0;
}

void findHighest(){
    if(northDiv > southDiv && northDiv > eastDiv && northDiv > westDiv)
        cout << "North Division had the greatest total sales: $" << northDiv << endl;
};

int main() {

    northDiv = getSales("North");
    southDiv = getSales("South");
    eastDiv = getSales("East");
    westDiv = getSales("West");
    northWestDiv = getSales("North West");
    northEastDiv = getSales("North East");
    southWestDiv = getSales("South West");
    southEastDiv = getSales("South East");
    
    findHighest();

    return 0;
}
