#include "RegularPolygon.h"

RegularPolygon::RegularPolygon()
{
	n = 3;
	side = 1;
	x = 0;
	y = 0;
}

RegularPolygon::RegularPolygon(int numOfSides, double lengthOfSides, double xCoor, double yCoor)
{
	n = numOfSides;
	side = lengthOfSides;
	x = xCoor;
	y = yCoor;
}

double RegularPolygon::getPerimeter()
{
	return n * side;
}

int RegularPolygon::getNumOfSides()
{
	return n;
}

double RegularPolygon::getLengthOfSide()
{
	return side;
}

double RegularPolygon::getXCoordinate()
{
	return x;
}

double RegularPolygon::getYCoordinate()
{
	return y;
}

void RegularPolygon::setNumOfSides(int numOfSides)
{
	n = numOfSides;
}

void RegularPolygon::setLengthOfSide(double lengthOfSide)
{
	side = lengthOfSide;
}

void RegularPolygon::setXCoordinate(double xCoor)
{
	x = xCoor;
}

void RegularPolygon::setYCoordinate(double yCoor)
{
	y = yCoor;
}


