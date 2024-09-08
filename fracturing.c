#include <stdio.h>
#include <math.h>
#define PI 3.14159

//by fabian fonseca - UCFID 5166910

//helper functions (UDF's meant to seperate logic into new functions)
void input(double *x1, double *y1, double *x2, double *y2) {
    //double x1, y1, x2, y2, distance;

    //point 1 input
    printf("Please enter values for x1 and y1 respectively: ");
    scanf("%lf %lf", x1, y1);
        
    //point 2 input
    printf("Please enter values for x2 and y2 respetively: ");
    scanf("%lf %lf", x2, y2);
}
   
void formula(double x1, double y1, double x2, double y2, double *distance, double *radius, double *perimeter, double *area) {
    //dist formula
    *distance = sqrt (pow(x2 - x1, 2)+ pow(y2 - y1, 2));

    //perimeter formula
    *radius = *distance / 2;
    *perimeter = 2 * PI * (*radius);

    //area formula
    //radius = distance /2;
    *area = PI * pow(*radius, 2);
}

double calculateDistance() { 
    double x1, y1, x2, y2, distance, perimeter, radius, area;

    //caling input
    input(&x1, &y1, &x2, &y2);
        
    //dist formula
    //distance = sqrt (pow(x2 - x1, 2)+ pow(y2 - y1, 2));
    //calling formula
    formula(x1, y1, x2, y2, &distance, &radius, &perimeter, &area);


    //3rd line of text
    printf("The distance between the two points is: %.2f\n", distance);
       
    return distance;
}

double calculatePerimeter() {
    double x1, y1, x2, y2, distance, perimeter, radius, area;

    //call input
    input(&x1, &y1, &x2, &y2);

    //perimeter formula
    //radius = distance / 2;
    //perimeter = 2 * PI * radius;
    //calling formula
    formula(x1, y1, x2, y2, &distance, &radius, &perimeter, &area);
    //3rd line of text
    printf("The perimeter of the city encompassed by your request is: %2f\n", perimeter);

    //difficulty
    return 3;
}

double calculateArea() {
    double x1, y1, x2, y2, distance, area, radius, perimeter;

    //call input
    input(&x1, &y1, &x2, &y2);

    //calling formula
    formula(x1, y1, x2, y2, &distance, &radius, &perimeter, &area);

    //output
    printf("The area of the city encompassed by your request is: %2f\n", area);
    
    //difficulty
    return 3;
}

double calculateWidth() {
    double x1, y1, x2, y2, distance, area, radius, perimeter;

    //call input
    input(&x1, &y1, &x2, &y2);

    //calling formula
    formula(x1, y1, x2, y2, &distance, &radius, &perimeter, &area);

    //output
    printf("The width of the city encompassed by your request is: %2f\n", distance);
    
    //difficulty
    return 1;
}

double calculateHeight() {
    double x1, y1, x2, y2, distance, area, radius, perimeter;

    //call input
    input(&x1, &y1, &x2, &y2);

    //calling formula
    formula(x1, y1, x2, y2, &distance, &radius, &perimeter, &area);

    //output
    printf("The height of the city encompassed by your request is: %2f\n", distance);
    
    //difficulty
    return 1;
}


/*optional function
double askForUserInput() {
    double x1, y1, x2, y2
    return x1, y1, x2, y2;
}
*/


int main(int argc, char **argv) {
    calculateDistance () ;
    calculatePerimeter () ;
    calculateArea () ;
    calculateWidth () ;
    calculateHeight () ;
    
    return 0;
}