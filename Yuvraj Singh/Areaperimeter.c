#include <stdio.h>
int main()
{
    float r;//r=radius of the circle
    float s;//s=side of square
    float l,b;//l=length of rect and b= breadth of rect
    //circle
    printf("Lets find the area and perimeter of a circle: \n");
    printf("Radius of the circle: \n");
    scanf("%f",&r);
    printf("Area of the circle is: %f\n",3.14*r*r);
    printf("Perimeter of the circle is: %f\n",2*3.14*r);
    //square
    printf("Lets find the area and perimeter of a square: \n");
    printf("Side of the square: \n");
    scanf("%f",&s);
    printf("Area of the square is: %f\n",s*s);
    printf("Perimeter of the square is: %f\n",4*s);
    //rectangle
    printf("Lets find the area and perimeter of a rectangle: \n");
    printf("Length of the rectangle: \n");
    scanf("%f",&l);
    printf("Breadth of the rectangle: \n");
    scanf("%f",&b);
    printf("Area of the rectangle is: %f\n",l*b);
    printf("Perimeter of the rectangle is: %f\n", 2*(l+b));
    return 0;
}