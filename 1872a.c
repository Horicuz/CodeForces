#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int n;
    scanf("%d", &n);
    for(int i = 0;i<n;i++)
    {
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        float dif = (float) abs(a-b)/2;
        int sum = 0;
        int k = 0;

       
        while(sum < dif)
        {
            sum = sum +c;
            k++;
        }

        printf("%d\n", k);
    }
    return 0;
}