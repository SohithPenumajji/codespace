#include <iostream>
#include "Diagnol.h" // Include the header file

using namespace std;

int main()
{
    int size;
    cout << "Enter the size of the diagonal matrix: ";
    cin >> size;

    // Create an instance of Diagnol class
    Diagnol diag(size);

    // Create the diagonal matrix
    cout << "Enter the elements for the diagonal matrix:\n";
    diag.create();

    // Display the diagonal matrix
    cout << "Diagonal Matrix:\n";
    diag.display();

    return 0;
}
