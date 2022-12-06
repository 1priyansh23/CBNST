#include <stdio.h>
float func(float x, float y)
{
    return (x+y+x*y);
}

void euler (float x0 , float y0, float h , float x )
{
    while(x0 < x)
    {
        y0 = y0 + h*func(x0,y0);
        x0 = x0 + h;
    }
    printf("The approximate value at x=0.1 is %f",y0);
}

int main()
{
    float x0 , y0;
    printf("Enter the values of x0 , y0:\n");
    scanf("%f%f",&x0,&y0);
    
    float h;
    printf("Enter the step size:\n");
    scanf("%f",&h);
    
    float x;
    printf("Enter the value of x at which we need approximation:\n");
    scanf("%f",&x);
    
    euler (x0,y0,h,x);
    return 0;
    

    return 0;
}
