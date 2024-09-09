#include <stdio.h>
#include <math.h>

#define PI 3.14159


int main(int argc, char **argv) {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();
    askForUserInput(); 
    return 0;
}

double calculateDistance() {
    double x1, y1, x2, y2;
    
    printf("Enter x1 and y1 for Point #1: ");
    x1 = askForUserInput();
    y1 = askForUserInput();

    printf("Enter x2 and y2 for Point #2: ");
    x2 = askForUserInput();
    y2 = askForUserInput();
    
    printf("Point #1 entered: x1 = %lf; y1 = %lf\n", x1, y1);
    printf("Point #2 entered: x2 = %lf; y2 = %lf\n", x2, y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

double calculatePerimeter() {

    double distance = calculateDistance();

    double perimeter = 4 * distance; 
    
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);
    
    return 3.0; 
}

double calculateArea() {

    double distance = calculateDistance();

    double area = distance * distance;

    printf("The area of the city encompassed by your request is %lf\n", area);


    return 4.0; 
}

double calculateWidth() {

    double distance = calculateDistance();
    
    printf("The width of the city encompassed by your request is %lf\n", distance);

    return 2.0; 
}

double calculateHeight() {

    double distance = calculateDistance();
    
    printf("The height of the city encompassed by your request is %lf\n", distance);

    return 2.5; 
}

double askForUserInput() {
    double input;
    scanf("%lf", &input);
    return input;
}
