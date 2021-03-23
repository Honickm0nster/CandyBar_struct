//
//  main.cpp
//  Assignment_5
//
//  Created by Noah Honickman on 12/26/20.
//This program creates a CandyBar struct and then creates an instance of it called snack

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct CandyBar{
    string name;
    double weight;
    int cal;
};
int main() {
    using namespace std;
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout<< "The name of snack is " << snack.name << ".\n";
    cout << "Its weight is " << snack.weight << " ounces. \n";
    cout << "There are " << snack.cal << " calories in this bar. \n";
    
    return 0;
}
