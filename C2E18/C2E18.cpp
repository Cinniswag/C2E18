// C2E18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // input
    double surveyno, pperweek = 15, pcitrus = 58, totalperweek, totalcitrus;
    cout << "Please enter the number of customers surveyed:" << endl;
    cin >> surveyno;
    // output
    totalperweek = (pperweek / 100) * surveyno;
    totalcitrus = (pcitrus / 100) * totalperweek;
    cout << fixed << setprecision(0) << "The approximate numer of people who purchase one or more energy drinks per week is " << totalperweek << endl;
    cout << fixed << setprecision(0) << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks is " << totalcitrus << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
