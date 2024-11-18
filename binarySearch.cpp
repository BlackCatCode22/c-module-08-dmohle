#include <iostream>
using namespace std;

int main() {
    cout << "\n\n **** Welcome to my Search Program! ****" << endl;

    // Create varibles that I will need to do my sorts
    int temp = 0;
    int numToFind = 0;
    int middleOfArrayToSearch = 0;
    bool found = false;


    // Create an int array of nine elements.
    int myArrayOfNine[9];
    // int myArrayOfNine[9] = {9,8,7,6,,5,4,3,2,1}

    // fill the array using numbers 1 to 9
    myArrayOfNine[0] = 1;
    myArrayOfNine[1] = 2;
    myArrayOfNine[2] = 3;
    myArrayOfNine[3] = 4;
    myArrayOfNine[4] = 5;
    myArrayOfNine[5] = 6;
    myArrayOfNine[6] = 7;
    myArrayOfNine[7] = 8;
    myArrayOfNine[8] = 9;


    // Output the array.
        cout << "\n The array is: " << endl;
        for (int i = 0; i < 9; i++) {
            cout << myArrayOfNine[i] << " ";
        }

    // Do a binary search
    numToFind = 7;
    // this will give us a 4
    middleOfArrayToSearch = 9/2;
    cout << "\n The middle of the array is: " << middleOfArrayToSearch << endl;
    // Check to find if the middle of our list is the number we are looking for.
    if (numToFind == middleOfArrayToSearch) {
        // search is complete
        found = true;
    }
    else {
        if (numToFind > middleOfArrayToSearch) {
            // the number must be in the second half
            middleOfArrayToSearch = middleOfArrayToSearch * 2;
        }
        else {
            // the number must be in the upper half
            middleOfArrayToSearch = middleOfArrayToSearch / 2;
        }
    }

    cout << "\n Was our number found? " << found << endl;
    // Step 1: find the middle of the list and compare





return 0;
}
