// Shubham Chouhan
//C_Programming Assignment_1 Ques-3
/* what is linear search & binary search?
   make a program of both using array. */

#include<stdio.h>
int main()
{
    int n,i,m,k,count,j;
    printf("Enter the no of element: \t");
    scanf("%d",&n);
    //now we have to create an array with given size
    int a[n];
    printf("Enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("If you want to search using\n ~Linear search press 1\n ~Binary search press 2\n ");
    scanf("%d",&m);
    if(m==1)
    {
        printf("Enter the element that you want to search\n");
        scanf("%d",&k);
        //Linear search is starting from here 
        for(i=0;i<n;i++)
        {
            if(k == a[i])
            {
                count =1;
                break;
            }
        }
        if(count == 1)
        {
            printf("Element is present in array at position %d", i+1);
        }
        else
        {
            printf("Element is not present in array\n");
        }
        

    }
    else if(m==2)
    {
        // binary search
        int first,last,mid;
        first =0;
        last = n-1;
        mid= (first+last)/2;
        //Binary search is starting from here
        printf("Enter the element that you want to search\n");
        scanf("%d",&j);
        while(first<=last)
        {
            if(a[mid] < j)
            {
                first = mid +1;
            }
            else if (a[mid] == j)
            {
                printf("%d found at location %d.\n",j,mid+1);
                break;
            }
            else
            {
                last = mid-1;
            }
            mid = (first + last)/2;
        }
    }
    else
    {
        printf("OOPS! You pressed a wrong key\n");
    }
    return 0;

}
