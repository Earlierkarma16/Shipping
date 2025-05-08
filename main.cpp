#include <iostream>
using namespace std;
int main()
{
    //initializes parameters for variables
    const double MinWeight = 1;
    const double MaxWeight = 20;
    const double MinDistance = 10;
    const double MaxDistance = 3000;
// intializes recquired variables
    float weight;
    float distance;
    float chargesTotal;
//prompts user to input weight variable
    cout << "What is the total weight of the package in kilograms?" << endl;
    cin >> weight;
//sets up error message if user input number outside of set parameters
    if (weight < MinWeight || weight > MaxWeight)

        cout << "This package does not meet the weight requirements, please make sure the package weighs" << endl
    << "more than 0 kg and under 2O kgs and try again."<< endl;
//prompts user to input distance variable
    else
        cout << "What is the required distance that it needs to travel?" << endl;
        cin >> distance;
//sets up error message if user inputs number outside of parameters
        if (distance < MinDistance || distance > MaxDistance)
            cout<<"The number you entered does not meet the distance requirements, please make sure the distance is"<<endl
            <<"between 10 miles and 3000 miles and try again"<< endl;
//calculates shipping charges depending on distance and weight
        else
                if (weight <= 2)
                    chargesTotal = (distance/500)*1.10;
                else if (weight >2 && weight <= 6)
                    chargesTotal = (distance/500)*2.20;
                else if (weight >6 && weight <= 10)
                    chargesTotal = (distance/500)*3.70;
                else if (weight >10 && weight <= 20)
                    chargesTotal = (distance/500)*4.80;
//outputs final calculation and recounts variables inputted by user
    cout << "The total cost to ship this package is $ "<< chargesTotal << endl
    <<"for a distance of "<<distance<< " miles and a total weight of "<<weight<<" kg."<< endl;


    return 0;
}