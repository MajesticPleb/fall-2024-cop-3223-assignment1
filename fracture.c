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

#include <stdio.h>
#include <math.h>
#define PI 3.14159


// Function to calculate the distance between two points
double calculatedistance() {
    double x1, y1, x2, y2;
    
    
    printf("What is the first set of coordinates for point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("What is the second set of coordinates for point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
;
    
    
    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);
    
    
    return distance;
}
double calculateperimeter(){
    double diameter = calculatedistance();
    double perimeter = PI * diameter;

    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", 0.0 , 0.0);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", diameter, diameter);
    printf("The perimeter of the city is %.2f\n", perimeter);

    return 2.0; 

}
double calculatearea(){
    double diameter = calculatedistance();
    double radius = diameter / 2;
    double area = PI * radius * radius;
    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", diameter, diameter);
    printf("The area of the city is %.2f\n", area);

    return 4.0;

}
double calculatewidth(){
    double width = calculatedistance();

    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", width, width);
    printf("The width of the city is %.2f\n", width);
    
    return 1.0;
}

double calculateheight(){
    double height = calculatedistance();

    printf("You entered point 1 coordinates as: x1 = %.2f; y1 = %.2f\n", 0.0, 0.0);
    printf("You entered point 2 coordinates as: x2 = %.2f; y2 = %.2f\n", height, height);
    printf("The height of the city is %.2f\n", height);
    
    return 1.0;
}
int main(int argc, char** argv){
    calculatedistance();
    calculateperimeter();
    calculatearea();
    calculatewidth();
    calculateheight();

    return 0;
}
