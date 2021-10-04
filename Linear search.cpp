#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20],i,x,n,flag=0;
    //Getting Array Size (n)
    printf("\nHow Many Elements? ");
    scanf("%d",&n);

    //Getting Array Elements
    for(i=0;i<n;i++)
    {
    printf("\n[Position %d] Enter Array Element %d: ",i,i+1);
    scanf("%d",&a[i]);
    }

    //Getting Element to Search (x)
    printf("\nEnter Element to Search: ");
    scanf("%d",&x);

    //Linear Searching Algortihm
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        printf("\nElement %d Found at Position: %d",x,i);
    } else {
        printf("\nElement Not Found in the Array");
    }

getch();
return(0);
}