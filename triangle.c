#include <stdio.h>
#include <cs50.h>

// J. I. Ekpo


// Output True/False: Valid Triangle, all sides correct

// Invalid Triangle: sideX + sideY > sideZ

// Declare functions
bool checkLengths(int side1, int side2, int side3);
bool checkInput(int a, int b, int c);


int main(void)
{

printf("Triangle Validator\n");


    int sideX, sideY, sideZ;

    bool validLengths;


    do
    {

    sideX = get_int("Enter side 1: ");
    sideY = get_int("Enter side 2: ");
    sideZ = get_int("Enter side 3: ");

    validLengths = checkInput(sideX, sideY, sideZ);
    } while(!validLengths);

    bool goodTriangle = checkLengths(sideX, sideY, sideZ);

    if (goodTriangle)
    {
        printf("Good Triangle!\n");
    }
    else
    {
        printf("What the f-?!\n");
    }

}

bool checkLengths(int side1, int side2, int side3)
{
    bool isValid;

    /* All posible cases but if the first one is true, the second is automatically false. Refactor
    side1+ side2 > side3;
    side1+side2 < side3;

    side1 + side3 > side2;
    side1 + side3 < side2;

    side2 + side3 > side1;
    side2 + side3 < side1;
    */

    bool case1 = side1+ side2 >= side3;
    bool case2 = side1 + side3 >= side2;
    bool case3 = side2 + side3 >= side1;

    if(case1)
    {
        return isValid = true;
    }
    else if(case2)
    {
        return isValid = true;
    }
    else if(case3)
    {
        return isValid = true;
    }
    else
    {
        return isValid = false;
    }


}

bool checkInput(int a, int b, int c)
{
    if (a<=0 || b<=0 || c<=0)
    {
        printf("Triangle can't have negative or 0 sides!\n Try again...\n");
        return false;
    }
    else
    {
        return true;
    }
}


