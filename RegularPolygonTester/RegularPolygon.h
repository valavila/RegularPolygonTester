#ifndef REGULARPOLYGON_H
#define REGULARPOLYGON_H
class RegularPolygon
{
private:
	int n = 3; // nums of sides with default value of three
	double side = 1; // lengths of sides with default value of one
	double x = 0; // x-coordinate of polygon center
	double y = 0; // y-coordinate of polygon center
public:
	RegularPolygon(); 
		
	RegularPolygon(int, double, double, double);

	double getPerimeter();

	int getNumOfSides();

	double getLengthOfSide();

	double getXCoordinate();

	double getYCoordinate();

	void setNumOfSides(int);

	void setLengthOfSide(double);

	void setXCoordinate(double);

	void setYCoordinate(double);



};
#endif
