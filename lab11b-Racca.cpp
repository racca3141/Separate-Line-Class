//Emerson Racca
//11/29/2021
//Lab 11b - Separate Line Class

/*
Revisit Lab 10a Geometry Line Segments and separate your Point and Segment class

1. Separate the Point class into two files (header file and source file).
2. Separate the Segment class into two files (header file and source file).
3. TEST IT - Make sure it all compiles before submitting.

Turn in two header files, two implementation files and one main .cpp.  (That is 5 files.)
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

//#include "Point.h" //Segment.h includes Point.h, so it wasn't necessary to include it here.
#include "Segment.h" //semicolon removed to remove compiler warning.


int main(void) {
	srand((unsigned int)time(0));

	cout << "Geometry Line Segments\n\n";

	cout << "Point class:" << endl;
	cout << "-----------------------------------------------------" << endl;

	Point pt1(-3, -3), pt2;

	cout << "Using accessors:" << endl;

	pt2.setX(-7);
	pt2.setY(-6);

	cout << "Point 1: x = " << pt1.getX() << ",  y = " << pt1.getY() << endl;
	cout << "Point 2: x = " << pt2.getX() << ",  y = " << pt2.getY() << endl << endl;

	cout << "Using methods:" << endl;
	cout << "Point 1: ";
	pt1.display();
	cout << "Point 2: ";
	pt2.display();



	cout << "\n\nSegment class with the points above: " << endl;
	cout << "-----------------------------------------------------" << endl;

	Segment s1(pt1, pt2);

	cout << "Using accessors:" << endl;
	cout << "Point 1: ";
	s1.getP1().display();
	cout << "Point 2: ";
	s1.getP2().display();

	cout << "\nUsing methods:" << endl;

	s1.display();

	cout << "Length of the segment: " << s1.length();

	cout << "\n\nLine segment changed using set accessors with new points: " << endl;

	pt1.setX(-1);
	pt1.setY(-1);
	pt2.setX(0);
	pt2.setY(0);

	s1.setP1(pt1);
	s1.setP2(pt2);

	s1.display();

	cout << "Length of the segment: " << s1.length() << endl << endl;

	cout << "\nRandom line segments:" << endl;
	cout << "-------------------------------------------------------\n";

	double x1, y1, x2, y2;
	for (int i = 0; i < 20; i++) {
		x1 = (rand() % 30 + 1.0 * rand() / RAND_MAX) - 15; //-15 to 15
		y1 = (rand() % 30 + 1.0 * rand() / RAND_MAX) - 15;
		x2 = (rand() % 30 + 1.0 * rand() / RAND_MAX) - 15;
		y2 = (rand() % 30 + 1.0 * rand() / RAND_MAX) - 15;

		pt1.setX(x1);
		pt1.setY(y1);
		pt2.setX(x2);
		pt2.setY(y2);

		s1.setP1(pt1);
		s1.setP2(pt2);

		s1.display();

		cout << "Length of the segment: " << s1.length() << endl << endl;


	}

	return 0;
}

