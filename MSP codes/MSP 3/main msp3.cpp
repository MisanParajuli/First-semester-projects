//Author: Misan Parajuli
//MSP 3
//Purpose: To ask name and phone number and display phone number associated with that name entered by the user.
//Pre-condition: User must input a valid number for no. of entries
//Post-condition: Program must output the corresponding phone number to the name entered by the user if it exist.
// if not program must return empty string.


#include <iostream>
using namespace std;

//Function Definition
//Purpose: It must match the phone number with the user entered name.
//Specification: It reiterates the loop according to the size of array to compare each element

string GetPhoneNumber(string nameArr[], string phoneNumberArr[], int SIZE, string contactName) {
    for (int i = 0; i < SIZE; i++) {
        if (contactName == nameArr[i]) {
            return phoneNumberArr[i];
        }
    }

    // If contact is not found, return an empty string
    return "";
}

int main() {

   int SIZE;
  // Program asks for the number of entries (N)
    cin >> SIZE;

    string nameArr[SIZE];
    string phoneNumberArr[SIZE];
    string contactName;

    for (int i = 0; i < SIZE; i++) {
        // Asks the user to enter names
        cin >> nameArr[i];
        cin >> phoneNumberArr[i];
    }

    cin >> contactName;

    // Function call
    string phoneNumber = GetPhoneNumber(nameArr, phoneNumberArr, SIZE, contactName);

    // Print the result
    cout << phoneNumber << endl;


   return 0;
}
