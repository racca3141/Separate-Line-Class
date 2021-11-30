#pragma once
#include<iostream>
using namespace std;

class Point {
private:
	double x, y;

public:
	//constructors
	Point(void);                     //Default constructor
	Point(double xArg, double yArg); //Default values not allowed since the default constructor takes care of that. 
	//accessors
	void setX(double xArg);
	void setY(double yArg);
	double getX(void);
	double getY(void);
	//methods
	void display(void);
};