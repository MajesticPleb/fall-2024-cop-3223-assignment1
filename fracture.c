//********************************************************
// fracture.c
// Author: Dennis Dang
// Date: 9/8/2024
// Class: COP 3223C, Professor Parra
// Purpose: The purpose of this assignment is to write 
// a program that can house multiple internal functions
// Input: coordinates of 2 seperate points
// Output:The distance, perimeter, area, height, and width 
// of the circle
// //********************************************************

//Includes the math, input, and output libraries
#include <stdio.h>
#include <math.h>
//Defines PI to make it shorter
#define PI 3.14159


// Calculates the distance between the 2 points
double calculatedistance() {
    double x1, y1, x2, y2;
    
    //Asks the user for the coordinates of the first point
    printf("What is the first set of coordinates for point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    //asks the user fo the coordinates of the second point 
    printf("What is the second set of coordinates for point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    //calculates the distance between the 2 points
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    
    //prints the coordinates entered and the distance between the 2 points
    //also condenses it down to 2 decimal points
    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    //returns the final distance between the points
    return distance;
}

//calculates the diameter of the circle
double calculateperimeter(){
    //calls the function from above to get parameters
    double diameter = calculatedistance();
    double perimeter = PI * diameter;

    //outputs the coordinates entered and the perimeter of the circle
    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", 0.0 , 0.0);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", diameter, diameter);
    printf("The perimeter of the city is %.2f\n", perimeter);

    return 2.0; 

}

//calculates the area of the circle
double calculatearea(){
    //calls for the calculatedistance function for coordinates
    double diameter = calculatedistance();
    //turns diameter to radius
    double radius = diameter / 2;

    //Multiplies PI by the radius squared
    double area = PI * pow(radius, 2);
    
    //Outputs the coordinates entered and the area of the circle
    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", diameter, diameter);
    printf("The area of the city is %.2f\n", area);

    return 4.0;

}
//calculates the width of the circle
double calculatewidth(){
    //Width of the circle is equal to calculated distance
    double width = calculatedistance();

    //outputs the coordinates and width of the circle
    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", width, width);
    printf("The width of the city is %.2f\n", width);
    
    return 1.0;
}
//calculates the height of the circle
double calculateheight(){
    //height of the circle is also equal to the distance between the two points
    double height = calculatedistance();

    //outputs the coordinates inputed and the height of the circle
    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", height, height);
    printf("The height of the city is %.2f\n", height);
    
    return 1.0;
}

//main function that calls the other functions
int main(int argc, char** argv){
    calculatedistance();
    calculateperimeter();
    calculatearea();
    calculatewidth();
    calculateheight();

    return 0;
}
