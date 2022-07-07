// Shubham Chouhan
//C_Programming Assignment_1 Ques-4
/* Make a program to insert an element into array (at beginning, in between or at last)
   Make a program to delete an element from array (at beginning, in between or at last) */
#include<stdio.h>
int main()
{
    int a[100],pos,i,n,val,l;
    printf("Enter the no of elements in array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Press 1 : Insertion \nPress 2 : Deletion \n");
    scanf("%d",&l);
    if(l==1)
    {
        // now at what position you want to insert an elemnet in array
        printf("Enter the position where you wanty to insert : ");
        scanf("%d",&pos);
        printf("\nEnter the value\n");
        scanf("%d",&val);

        for(i=n-1; i>=pos -1 ; i--)
        {
            a[i+1] = a[i];
        }
        a[pos-1]=val;
        printf("The final output is\n");
        for(i=0;i<=n;i++)
        {
            printf("%d\t",a[i]);
        }
    }    
    else if(l==2)
    {
        // now we go for deletion 
        printf("enter a postion of element that you want to delete\n");
        scanf("%d",&pos);
        if(pos >=n+1)
        printf("Deletion is not possible\n");
        else
        {
            for(i=pos-1;i<n-1;i++)
            {
                a[i]=a[i+1];
            }
            printf("The final output is\n");
            for(i=0;i<n-1;i++)
            {
                printf("%d\t",a[i]);
            }
        }
    }
    else
printf("You entered a wrong key\n");
return 0;
}
