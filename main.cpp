/*****************************************************************************
 * AUTHOR	  : Stanley Ferguson and Jeff Thomas
 * STUDENT ID : 1052330 and 1007159
 * LAB #11	  : Output - Geometry
 * CLASS	  : CS1A
 * SECTION	  : MW: 8am
 * DUE DATE	  : 03/08/17
 *****************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/*****************************************************************************
 * OUTPUT - GEOMETRY
 *----------------------------------------------------------------------------
 * This program will obtain from the user the
 * dimensions of 3 geometric objects...
 * 		a triangle,
 * 		rectangle, and
 * 		a circle.
 *
 * It calculates, stores and outputs the area and circumference of each
 * triangle, rectangle, and circle object.
 *----------------------------------------------------------------------------
 * INPUT:
 *	  Three sets of data will be input
 * 	  *************
 * 	  *** set 1 ***
 * 	  *************
 * 	  	triangleHeight	: the height of the triangle
 * 	  	triangleBase	: the size of the base of the triangle
 *
 *	  *************
 * 	  *** set 2 ***
 * 	  *************
 * 	  	rectangleWidth	: the width of the rectangle
 * 	  	rectangleHeight	: the height of the rectangle
 *
 *    *************
 * 	  *** set 3 ***
 * 	  *************
 * 	  	circleRadius	: the radius of the circle
 *
 * OUTPUT:
 * 	This program will output the program heading and the triangle area,
 * 	triangle perimeter, rectangle area, rectangle perimeter, circle area,
 * 	and circle circumference
 * 		triangleArea 	    : the area of the triangle
 * 		trianglePerimeter   : the perimeter of the triangle
 * 		rectangleArea		: the area of the rectangle
 * 		rectanglePerimeter  : the perimeter of the rectangle
 * 		circleArea			: the area of the circle
 * 		circleCircumference : the circumference of the circle
 *
 *****************************************************************************/

int main()
{
	/*************************************************************************
	 * CONSTANTS
	 * -----------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -----------------------------------------------------------------------
	 * PROGRAMMER : Programmer's Name
	 * CLASS	  : Student's Course
	 * SECTION	  : Class Days and Times
	 * LAB_NUM	  : Lab Number (specific to this lab)
	 * LAB_NAME	  : Title of the Lab
	 *************************************************************************/
	const char PROGRAMMER[] = "Stanley Ferguson and Jeff Thomas";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8:00a";
	const int  LAB_NUM		= 11;
	const char LAB_NAME[]	= "Output - Geometry";
	const float PI 			= 3.14159;

	float triangleHeight;      // IN         - Set 1: triangle height
	float triangleBase;        // IN         - Set 1: triangle base
	float triangleArea;        // CALC & OUT - Set 1: triangle area
	float trianglePerimeter;   // CALC & OUT - Set 1: triangle perimeter

	float rectangleWidth;      // IN		 - Set 2: rectangle width
	float rectangleHeight;	   // IN		 - Set 2: rectangle height
	float rectangleArea;	   // CALC & OUT - Set 2: rectangle area
	float rectanglePerimeter;  // CALC & OUT - Set 2: rectangle perimeter

	float circleRadius;		   // IN		 - Set 3: circle radius
	float circleArea;		   // CALC & OUT - Set 3: circle area
	float circleCircumference; // CALC & OUT - Set 3: circle circumference

	// OUTPUT - Class Heading
	cout << left;
	cout << "**************************************************\n";
	cout << "*  PROGRAMMED BY : "  << PROGRAMMER << endl;
	cout << "*  "	   << setw(14) << "CLASS"	 << ": " << CLASS    << endl;
	cout << "*  "	   << setw(14) << "SECTION"  << ": " << SECTION  << endl;
	cout << "*  LAB #" << setw(9)  << LAB_NUM	 << ": " << LAB_NAME << endl;
	cout << "**************************************************\n\n";
	cout << right;

	/*************************************************************************
	 * INPUT - Set 1: read in 1 set of data each containing:
	 * 		   triangleHeight, and
	 * 	  	   triangleBase
	 *************************************************************************/
	// INPUT - Set 1: triangleHeight, and triangleBase
	cout << left;
	cout << setw(34) << "Enter the height of the triangle: ";
	cin  >> triangleHeight;

	cout << left;
	cout << setw(34) << "Enter the base of the triangle: ";
	cin  >> triangleBase;

	/*************************************************************************
	 * PROCESSING - Set 1: calculates the area and perimeter of the triangle
	 *************************************************************************/
	triangleArea = (triangleHeight * triangleBase) / 2.0;
	trianglePerimeter = triangleBase * 3;

	/*************************************************************************
	 * OUTPUT - Set 1: output the area and perimeter of the triangle
	 *
	 * 			TRIANGLE OBJECT
	 * 				 Area		  Perimeter
	 * 			  412.185		      57.15
	 *************************************************************************/
	// OUTPUT - one set of data (triangleArea, & trianglePerimeter)
	cout << endl << "TRIANGLE OBJECT" << endl;
	cout << setw(9)  << right << "Area";
	cout << setw(18) << right << "Perimeter" << endl;
	cout << setw(9)  << right << triangleArea;
	cout << setw(18) << right << trianglePerimeter << endl << endl << endl;

	/*************************************************************************
	 * INPUT - Set 2: read in 1 set of data each containing:
	 * 		   rectangleWidth, and
	 * 		   rectangleHeight
	 *************************************************************************/
	// INPUT - Set 2: rectangleWidth, and rectangleHeight
	cout << left;
	cout << setw(36) << "Enter the width of the rectangle: ";
	cin  >> rectangleWidth;

	cout << left;
	cout << setw(36) << "Enter the height of the rectangle: ";
	cin  >> rectangleHeight;

	/*************************************************************************
	 * PROCESSING - Set 2: calculates the area and perimeter of the rectangle
	 *************************************************************************/
	rectangleArea = rectangleWidth * rectangleHeight;
	rectanglePerimeter = (rectangleWidth + rectangleHeight) * 2;

	/*************************************************************************
	 * OUTPUT - Set 2: output the area and perimeter of the rectangle
	 *
	 * 			RECTANGLE OBJECT
	 * 				 Area		  Perimeter
	 * 			   821.37		    114.758
	 *************************************************************************/
	// OUTPUT - one set of data (rectangleArea, & rectanglePerimeter)
	cout << endl << "RECTANGLE OBJECT" << endl;
	cout << setw(9)  << right << "Area";
	cout << setw(18) << right << "Perimeter" << endl;
	cout << setw(9)  << right << rectangleArea;
	cout << setw(18) << right << rectanglePerimeter << endl << endl << endl;

	/*************************************************************************
	 * INPUT - Set 3: read in 1 set of data containing:
	 * 		   circleRadius
	 *************************************************************************/
	// INPUT - Set 3: circleRadius
	cout << left;
	cout << setw(32) << "Enter the radius of the circle: ";
	cin  >> circleRadius;

	/*************************************************************************
	 * PROCESSING - Set 3: calculates the area and circumference of the circle
	 *************************************************************************/
	circleArea = PI * (circleRadius * circleRadius);
	circleCircumference = PI * circleRadius * 2;

	/*************************************************************************
	 * OUTPUT - Set 3: output the area and circumference of the circle
	 *
	 * 			CIRCLE OBJECT
	 * 				 Area     Circumference
	 * 			  201.062		    50.2654
	 *************************************************************************/
	// OUTPUT - one set of data (circleArea, & circleCircumference)
	cout << endl << "CIRCLE OBJECT" << endl;
	cout << setw(9)  << right << "Area";
	cout << setw(18) << right << "Circumference" << endl;
	cout << setw(9)  << right << circleArea;
	cout << setw(18) << right << circleCircumference << endl << endl << endl;

	return 0;
}
