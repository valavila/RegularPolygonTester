
#include <iostream>
#include "RegularPolygon.h"

using namespace std;

int main()
{
    // Initialize a variable of RegularPolygon with default values
    RegularPolygon poly1; 

    // Get value of default fields
    double lengthOfSide = poly1.getLengthOfSide();
    int numOfSides = poly1.getNumOfSides();
    double xCoor = poly1.getXCoordinate();
    double yCoor = poly1.getYCoordinate();
    double perimeter = poly1.getPerimeter();

    cout << "The dafault values are: " << endl
        << "Length of sides: " << lengthOfSide << endl
        << "Number of sides: " << numOfSides << endl
        << "The x-coordinate: " << xCoor << endl
        << "The y-coordinate: " << yCoor << endl 
        << "With a perimeter of: " << perimeter << endl << endl;

    // Set new vaules to the fields
    poly1.setLengthOfSide(5.20);
    poly1.setNumOfSides(5);
    poly1.setXCoordinate(3.3);
    poly1.setYCoordinate(2.2);

    // Get the new values
    lengthOfSide = poly1.getLengthOfSide();
    numOfSides = poly1.getNumOfSides();
    xCoor = poly1.getXCoordinate();
    yCoor = poly1.getYCoordinate();
    perimeter = poly1.getPerimeter();

    cout << "The new values are: " << endl
        << "Length of sides: " << lengthOfSide << endl
        << "Number of sides: " << numOfSides << endl
        << "The x-coordinate: " << xCoor << endl
        << "The y-coordinate: " << yCoor << endl
        << "With a perimeter of: " << perimeter << endl << endl;

    // Create new polygon but with default values passed in
    RegularPolygon poly2(6, 5.5, 5.54, 6.63);

    // Get value of new polygon fields
    double lengthOfSide2 = poly2.getLengthOfSide();
    int numOfSides2 = poly2.getNumOfSides();
    double xCoor2 = poly2.getXCoordinate();
    double yCoor2 = poly2.getYCoordinate();
    double perimeter2 = poly2.getPerimeter();

    //Output assigned values
    cout << "The assigned values for a polygon with passed in parameters: " << endl
        << "Length of sides: " << lengthOfSide2 << endl
        << "Number of sides: " << numOfSides2 << endl
        << "The x-coordinate: " << xCoor2 << endl
        << "The y-coordinate: " << yCoor2 << endl
        << "With a perimeter of: " << perimeter2 << endl << endl;
    // Set new values    
    poly2.setLengthOfSide(8.76);
    poly2.setNumOfSides(8);
    poly2.setXCoordinate(30.3);
    poly2.setYCoordinate(50.93);

    // Get new values
    lengthOfSide2 = poly2.getLengthOfSide();
    numOfSides2 = poly2.getNumOfSides();
    xCoor2 = poly2.getXCoordinate();
    yCoor2 = poly2.getYCoordinate();
    double perimeter3 = poly2.getPerimeter();

    //Output new values
    cout << "After assigning new values to each field: " << endl
        << "Length of sides: " << lengthOfSide2 << endl
        << "Number of sides: " << numOfSides2 << endl
        << "The x-coordinate: " << xCoor2 << endl
        << "The y-coordinate: " << yCoor2 << endl
        << "With a perimeter of: " << perimeter3 << endl << endl;

    system("pause");
}


