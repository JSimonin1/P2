/*
Enter integer values continuously until the value 225 is entered. After the application has finished
getting numbers from the user, the program outputs the the sum of those numbers, the number of numbers
that were entered, the average of those numbers, the largest value entered, and the smallest number entered.
The user may enter as many numbers less than 225 or greater than 225 as desired.
*/

#include <cmath> // math class
#include <iostream> // enables input/ output. Examples: cin, cout
#include <iomanip> // enables the use of manipulators
/*
A manipulator is something that is sent to cout to specify how values should be formatted. Example: cout << fixed << setprecision(2);
*/
using namespace std; // this is always needed


// Main Method
int main()
{
// CONSTANT SENTINAL VALUE
    const int END_PROGRAM = 225;
// VARIABLES
    double average = 0;
    double sum = 0;
    int numbers_entered = 0;
    int largest_number = 0;
    int smallest_number = 0;
    int user_input = 0;
    
// USER MESSAGE
    cout << "Please enter any integer value other than 225. \nEnter 225 to finish. " << endl;

//do While true loop
    while (true) {
        cin >> user_input;
// break from program if 225 is entered
        if (user_input == END_PROGRAM) {
           break;
        }

// sum and numbers_entered tracker
        sum = sum + user_input;
        numbers_entered++;

// largest/smallest numbers = user entry for 1 number entered
        if (numbers_entered == 1) {
            largest_number = user_input;
            smallest_number = user_input;
        }
// largest smallest number finder for > 1 entry
        else {
            if (user_input > largest_number) {
            largest_number = user_input;
        }
            if (user_input < smallest_number) {
            smallest_number = user_input;
            }
        }
        
    }

// if entries detected then output message to user
    if (numbers_entered > 0) {

// average finder
            average = sum / numbers_entered;

// OUTPUTS TO USER
            cout << "**************************************"
            << "\n            OUTPUT SUMMARY            "
            << "\n**************************************"
            << "\nNumbers entered: " << numbers_entered
            << fixed << setprecision(0) << "\nSum of numbers: " << sum
            << fixed << setprecision(2) << "\nAverage of numbers: " << average
            << "\nLargest number entered: " << largest_number
            << "\nSmallest number entered: " << smallest_number
            << "\n**************************************"
            << endl;
        }

// NO ENTRY MADE
        else {
            cout << "No entries were made." << endl;
        }
        return 0;  
}
    
