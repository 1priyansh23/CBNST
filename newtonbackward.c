#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of data points: ");
    scanf("%d",&n);
    float dt[50][50];
    
    printf("Enter the values into difference table:\n");
    
    for(int i=0 ;i<n ;i++)
    {
        scanf("%f%f",&dt[i][0],&dt[i][1]);
    }
    for(int i=2 ; i<=n ;i++)
    {
        for(int j=n-1 ; j>i-2;j--)
        {
            dt[j][i]= dt[j][i-1]-dt[j-1][i-1];
        }
    }
    float h = dt[1][0]-dt[0][0];
    float x;
    printf("Enter the value at which you want to calculate the value: ");
    scanf("%f",&x);
    float u = (x-dt[n-1][0])/h;
    
    float ans = dt[n-1][1];
    float fact = 1.0;
    float ch = u;
    
    for(int i=2 ;i<=n ;i++)
    {
        ans += (ch/fact)*dt[n-1][i];
        ch *= (u+(float)(i-1));
        fact *= i;
    }
    printf("Answer is %f",ans);

    return 0;
}
