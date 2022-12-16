#include <stdio.h>
#define f(x) (1/(1+x*x))
#define MAX 50

int main()
{
    int n;
    printf("Enter the number of sub-intervals: ");
    scanf("%d",&n);
    
    float x[MAX],y[MAX];
    
    printf("Enter the intervals: ");
    scanf("%f%f",&x[n],&x[0]);
    
    float h = ((x[n]-x[0])/(float)n);
    
    for(int i=1 ;i<n ;i++)
    {
        x[i] = x[i-1]+h;
    }
    for(int i=0 ;i<=n ;i++)
    {
        y[i] = f(x[i]);
    }
    float ans = 0.0f;
    for(int i=1 ;i<n ;i++)
    {
        ans = ans+y[i];
    }
    ans = ans*2;
    ans = ans + y[0]+y[n];
    ans = ans*(h/2.0);
    printf("The answer is %f",ans);
    return 0;
}
