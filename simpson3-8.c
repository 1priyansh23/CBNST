#include <stdio.h>
#define f(x) (1/(1+x*x))

int main()
{
    int n;
    printf("Enter the no of subintervals: ");
    scanf("%d",&n);
    
    float x[50],y[50];
    
    printf("Enter the intervals: ");
    scanf("%f%f",&x[n],&x[0]);
    
    float h = (x[n]-x[0])/(float)n;
    
    for(int i=1;i<n ;i++)
    {
        x[i]=x[i-1]+h;
    }
    for(int i=0 ;i<=n ;i++)
    {
        y[i] = f(x[i]);
    }
    float ans = 0.0f;
    for(int i= 1; i<n ;i++)
    {
        if(i%3==0)ans = ans+2*y[i];
        else ans = ans + 3*y[i];
    }
    ans+=y[0]+y[n];
    ans = ans*((3.0*h)/8.0);
    printf("The answer is %f",ans);
    return 0;
}
