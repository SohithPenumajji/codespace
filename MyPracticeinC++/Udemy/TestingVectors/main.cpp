#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1; // vector 1 initialized to 0. the vector contains 0

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Elements in vector1 are: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    cout << "Size of vector1 is: " << vector1.size() << " elements" << endl;

    vector<int> vector2;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Elements in vector2 are: " << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) << endl;

    cout << "Size of vector2 is: " << vector2.size() << " elements" << endl;

    vector<vector<int>> vector_2d;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "Elements in vector_2d are: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    vector1.at(0) = 1000;

    cout << "Now Elements in vector_2d are: " << endl;
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;

    cout << "Elements in vector1 are: " << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) << endl;

    return 0;
}
