#include "Point.h" //semicolon was removed to remove compiler warning.

// Point:
// -------------------------------------
// constructors
Point::Point(void) {
	setX(0);
	setY(0);
}
Point::Point(double xArg, double yArg) {
	setX(xArg);
	setY(yArg);
}
// accessors
void Point::setX(double xArg) {
	x = xArg;
}
void Point::setY(double yArg) {
	y = yArg;
}
double Point::getX(void) {
	return x;
}
double Point::getY(void) {
	return y;
}
// methods
void Point::display(void) {
	cout << "x = " << getX() << " , y = " << getY() << endl;
}