#pragma once
//#include<iostream> //not necessary to include these since Point.h already includes them.
//using namespace std;

#include "Point.h" //semicolon was removed to remove compiler warning.

class Segment {
private:
	Point p1, p2;

public:
	//constructors
	Segment(void);
	Segment(Point argP1, Point argP2);
	//accessors
	void setP1(Point argP1);
	void setP2(Point argP2);
	Point getP1(void);
	Point getP2(void);
	//methods
	void display(void);
	double length(void);
};
