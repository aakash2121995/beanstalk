#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100000],size,i,test,temp;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&size);

        for(i=0;i<size;i++)
            scanf("%d",a+i);

        for(i=0;i<size-1;i++)
        {
            if((i%2==0&&a[i]>a[i+1])||(i%2==1&&a[i]<a[i+1]))
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1]= temp;
            }
        }
        for(i=0;i<size;i++)
            printf("%d ",*(a+i));
        printf("\n");

        }
    return 0;
}
