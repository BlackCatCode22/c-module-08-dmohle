#include <iostream>
using namespace std;

int main() {
    cout << "\n\n **** Welcome to my Sorting Program! ****" << endl;

    // Create varibles that I will need to do my sorts
    int temp = 0;

    // Create an int array of nine elements.
    int myArrayOfNine[9];
    // int myArrayOfNine[9] = {9,8,7,6,,5,4,3,2,1}

    // fill the array using numbers 1 to 9
    myArrayOfNine[0] = 9;
    myArrayOfNine[1] = 8;
    myArrayOfNine[2] = 7;
    myArrayOfNine[3] = 6;
    myArrayOfNine[4] = 5;
    myArrayOfNine[5] = 4;
    myArrayOfNine[6] = 3;
    myArrayOfNine[7] = 2;
    myArrayOfNine[8] = 1;

    // output the array
    cout << "\n array before sorting " << endl;
    for (int i = 0; i < 9; i++) {
        cout << myArrayOfNine[i] << " ";
    }

    // Do the bubble sort
    for (int i = 0; i < 9; i++) {
        // I know I must loop through my array n-1 times, and then n-1 times
        // n = 9
        for (int j = 0; j < 9; j++) {
            if (myArrayOfNine[j] > myArrayOfNine[j+1]) {
                // Swap the elements
                temp = myArrayOfNine[j];
                myArrayOfNine[j] = myArrayOfNine[j+1];
                myArrayOfNine[j+1] = temp;
            }
        }
        // Output the array after an inner loop
        cout << "\n Array after i is " << i << endl;
        for (int i = 0; i < 9; i++) {
            cout << myArrayOfNine[i] << " ";
        }
    }

    return 0;
}
