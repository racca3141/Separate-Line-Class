#include "Segment.h" //semicolon removed to remove compiler warning.

// Segment:
// -------------------------------------
// constructors
Segment::Segment(void) {
	p1.setX(0);
	p1.setY(0);
	p2.setX(0);
	p2.setY(0);
}
Segment::Segment(Point argP1, Point argP2) {
	p1.setX(argP1.getX());
	p1.setY(argP1.getY());
	p2.setX(argP2.getX());
	p2.setY(argP2.getY());

}
// accessors
void Segment::setP1(Point argP1) {
	p1 = argP1;
}
void Segment::setP2(Point argP2) {
	p2 = argP2;
}
Point Segment::getP1(void) {
	return p1;
}
Point Segment::getP2(void) {
	return p2;
}
// methods
void Segment::display(void) {
	cout << "Point 1: ";
	getP1().display();
	cout << "Point 2: ";
	getP2().display();
}
double Segment::length(void) {
	double lx = getP2().getX() - getP1().getX();
	double ly = getP2().getY() - getP1().getY();
	return (sqrt(pow(lx, 2) + pow(ly, 2)));
}