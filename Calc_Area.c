#include <stdio.h> 
#include <string.h> 
#include <math.h> 

typedef struct {
    double x;
    double y;
} Point;

typedef struct {
    Point topLeft;   /* top left point of rectangle */
    Point botRight;  /* bottom right point of rectangle */
} Rectangle;

double computeArea(Rectangle *r);

int main()
{
    Point p;
    Rectangle r;

    printf("\nEnter top left point: ");
    scanf("%lf", &r.topLeft.x);
    scanf("%lf", &r.topLeft.y);
    printf("Enter bottom right point: ");
    scanf("%lf", &r.botRight.x);
    scanf("%lf", &r.botRight.y);
    printf("Top left x = %lf  y = %lf\n", r.topLeft.x, r.topLeft.y);
    printf("Bottom right x = %lf  y = %lf\n", r.botRight.x, r.botRight.y);
    printf("Area = %d", computeArea(&r));
    return 0;
}

double computeArea(Rectangle *r)
{
    double height, width, area;

    height = ((r->topLeft.y) - (r->botRight.y));
    width = ((r->topLeft.x) - (r->botRight.x));
    area = height*width;
    return (area);
}