#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of data points: ");
    scanf("%d",&n);
    
    float x[50],y[50];
    
    printf("Enter the values:\n");
    for(int i=0 ;i<n ;i++)
    {
        scanf("%f%f",&x[i],&y[i]);
    }
    
    float r;
    printf("Enter the value at which you want to calculate the value: ");
    scanf("%f",&r);
    
    float ans = 0.0;
    
    for(int i=0 ;i<n;i++)
    {
        float num=1.0,den=1.0;
        for(int j=0 ;j<n ;j++)
        {
            if(i!=j)
            {
                num*=r-x[j];
                den*=x[i]-x[j];
            }
        }
        ans+=(num/den)*y[i];
    }
    printf("The answer is %f",ans);
    return 0;
}
