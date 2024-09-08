#include <stdio.h>
#include <math.h>
#define PI 3.14159

//by fabian fonseca - cop3223c

//helper functions (UDF's meant to seperate logic into new functions)
double calculateDistance();
    {
        //no args
        double x1, y1, x2, y2, distance;

        //point 1 input
        printf("Please enter values for x1 and y1 respectively: ");
        scanf("%lf %lf", &x1, &y1);
        
        //point 2 input
        printf("Please enter values for x2 and y2 respetively: ");
        scanf("%lf %lf", &x2 &y2);

        //distance (dist formula?)
        distance = sqrt (pow(x2 - x1, 2)+ pow(y2 - y1, 2));

        //3rd line of text
        printf("the distance between the two points is: ", distance);
       
        return distance;
    }

double calculatePerimeter();
    {
        //no args

        //outs 2 lines of text
            /*– Point #1 entered: x1 = -whatever was entered-; y1
            = -whatever was entered-
            – Point #2 entered: x2 = -whatever was entered-; y2
            = -whatever was entered-
            – The perimeter of the city encompassed by your re-
            quest is -whatever is computed-*/
        //returns a double how difficult this function was to create
        //must use calculate distance to avoid repeating code
    
    }

double calculateArea();
    {
        /*• Arguments: This function have no arguments.
        • Output: This function should output three lines of text
        – Point #1 entered: x1 = -whatever was entered-; y1
        = -whatever was entered-
        – Point #2 entered: x2 = -whatever was entered-; y2
        = -whatever was entered-
        – The width of the city encompassed by your request
        is -whatever is computed-
        • Return: A double indicating how difficult you found to
        do this function on a scale of 1.0 through 5.0 where 1 is
        easy and 5 is hard*/
    }

double calculateHeight();
    {
        /*• Arguments: This function have no arguments.
        • Output: This function should output three lines of text
        – Point #1 entered: x1 = -whatever was entered-; y1
        = -whatever was entered-
        – Point #2 entered: x2 = -whatever was entered-; y2
        = -whatever was entered-
        – The height of the city encompassed by your request
        is -whatever is computed-
        • Return: A double indicating how difficult you found to
        do this function on a scale of 1.0 through 5.0 where 1 is
        easy and 5 is hard*/
    }

//optional function
//double askForUserInput();
    {
        //no args, no output, returns double representing the users typed in value, attributes to the DRY method
    }

int main(int argc, char **argv) {
    calculateDistance () ;
    calculatePerimeter () ;
    calculateArea () ;
    calculateWidth () ;
    calculateHeight () ;
    
    return 0;
}