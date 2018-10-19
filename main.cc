//Matthew O'Connell
//ECE 2620-001
//Lab 3

#include <iostream>
#include "circle.h"
using namespace std;

int main()
{
	int menuChoice;
	double x1,y1,x2,y2; 
	circle<int> my_obj1;
	circle<double> my_obj2;//my_obj1 & my_obj2 circle object declaration
	my_obj1.populate_classobj(1,3); // int circle object instantiation
	my_obj2.populate_classobj(-1.5,-6.65,-0.5,10.0);//double circle object instantiation
	while(menuChoice != 6){ //allows the menu option to loop until the user wishes to exit the program
                cout << "(1) Compute the radii of the two circles" << endl << "(2) Compute the circumferences of the two circles" << endl << "(3) Compute the areas of the two circles" << endl << "(4) Enter new x1, y1, x2, y2 values for Object 1" << endl << "(5) Enter new x1, y1, x2, y2 values for Object 2" << endl << "(6) Exit" << endl;
                cin >> menuChoice;
                if(menuChoice != 6){
                        switch(menuChoice){ //calculates certain desired values based on user input i.e. radius, circumference, area
                                case 1:
                                        cout << "The radius of the two circles are: " << endl << "Object 1: " << my_obj1.radius() << endl << "Object 2: " << my_obj2.radius() << endl;
                                        break;

                                case 2:
                                        cout << "The circumferences of the two circles are: " << endl << "Object 1: " << my_obj1.circumference() << endl << "Object 2: " << my_obj2.circumference() << endl;
                                        break;

                                case 3:
                                        cout << "The areas of the circles are: " << endl << "Object 1: " << my_obj1.area() << endl << "Object 2: " << my_obj2.area() << endl;
                                        break;
								case 4:
										cout << "Enter the coordinates of the center of Object 1 separated by whitespace:" << endl;
										cin >> x1 >> y1;
										cout << "Enter the coordinates of a point on the circle separated by whitespace:" << endl;
										cin >> x2 >> y2;
										my_obj1.populate_classobj(x1,y1,x2,y2);
										break;
								case 5:
										cout << "Enter the coordinates of the center of Object 2 separated by whitespace:" << endl;
										cin >> x1 >> y1;
										cout << "Enter the coordinates of a point on the circle separated by whitespace:" << endl;
										cin >> x2 >> y2;
										my_obj2.populate_classobj(x1,y1,x2,y2);
										break;
                                default: //triggers if the user enters a number that is not 1,2,3,4,5 or 6
                                        cout << "Please choose a valid option." << endl;
                                        break;
                        }
                }
        }


	
	return 0;
}

