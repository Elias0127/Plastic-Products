/* 
   This program takes different types of recycled plastic and ask the user for the number of pounds required for each one.
   And then it produces a purchase order.
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    // Array decleration with the names of each plastic type
    string plasticTypes [6] = {"PET beverage bottles and jars",
                               "Natural high-density polyethylene",
                               "Color HDPE",
                               "Grade A film",
                               "Grade B film",
                               "Grade C film"};
    // Array decleration with the price of each plastic type
    double price [6] = {.08, .34, .04, .08, .05, .02};
    // Array decleration to hold the number of pounds for each plastic type
    double pounds[6];
    // Array decleration to store the total cost for each plastic type
    double totalCost[6];
    // Variable decleration
    double totalWeight = 0;
    double totalCostPurcahse = 0.0;
    int i; // Loop counter

    cout << "This program creates a purchase order for Plastic Products Inc." << endl;
    cout << "Enter the weight (in pounds) for each item to create a purchase order." << endl;
    cout << endl;

    // Loop to ask the user for the same question for each index in the array
    for (i = 0; i <= 5; i++) {
        cout << "How many pounds of " << plasticTypes[i] << "? ";
        cin >> pounds[i];
        
        // To make sure negative values are not entered by the user
        while (pounds[i] < 0)
        {
            cout << "No negative values please! Enter the weight again: ";
            cin >> pounds[i];
        }
    // Calculating the total cost and weight for each plastic
    totalCost[i] = price[i] * pounds[i];
    totalWeight += pounds[i];
    totalCostPurcahse += totalCost[i];
    }

    cout << "-------------------------------------   PURCHASE ORDER    ----------------------------------------" << endl;
    
    // Using setprecision() to display two decimals
    cout << fixed << setprecision(2);

    cout << left << setw(40) << "Material";
    cout << left << setw(20) << "Weight (Pounds)";
    cout << left << setw(20) << "Cost/Pound";
    cout << right << setw(8) << "Cost" << endl;

    // Using loop again to display the results of each plastic types by their index order
    for(i = 0; i < 6; i++)
    {
        cout << left << setw(40) << plasticTypes[i];
        cout << left << setw(20);
        cout<<setprecision(2)<<fixed << pounds[i];
        cout << left << "$" << price[i];
        cout << right << setw(20)<< "$" << totalCost[i]<< endl;
      
    }
        cout << "-------------------------------------------------------------------------------------------------" << endl;
    
        // Displaying the total results
        cout << left << setw(40) << "Totals:";
        cout << left << setw(44);
        cout<<setprecision(2)<<fixed << totalWeight;
        cout << "$" << totalCostPurcahse << endl << endl;
 
    return 0;
}
