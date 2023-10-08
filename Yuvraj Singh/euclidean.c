//program to find the euclidean distance between two points  in a plane
//distance=sqrt(x2-x1)^2+(y2-y1)^2
#include <stdio.h>
#include <math.h>
int main()
{
    int x1,y1,x2,y2;
    printf("Enter the co-ordinates of the first point: \n");
    scanf("%d%d",&x1,&x2);
    printf("Enter the co-ordinates of the second point: \n");
    scanf("%d%d",&x2,&y2);
    float distance=sqrt(pow(x2-x1,2))+(pow(y2-y1,2));
    printf("The distance is: %.2f",distance);
    return 0;
}