#include <stdio.h>
float func(float x, float y)
{
    return (x*x + y*y);
}

void runge_kutta (float x0 , float y0, float h , float x )
{
    float k1,k2,k3,k4;
    while(x0 < x)
    {
        k1 = h*func(x0, y0);
        k2 = h*func(x0 + 0.5*h, y0 + 0.5*k1);
        k3 = h*func(x0 + 0.5*h, y0 + 0.5*k2);
        k4 = h*func(x0 + h, y0 + k3);
        
         y0 = y0 + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);
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
    
    runge_kutta(x0,y0,h,x);
    return 0;
    

    
}
