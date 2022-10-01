/******************************************************************************
o/p:
Enter size of array 1 and 2:3
4
Enter 1st array elements : 1 2 3 
Enter 2nd array elements : 2 3 5 7
Given arrays are : 
a :{ 1, 2, 3 }
b :{ 2, 3, 5, 7 }
a U b : { 1 ,2 ,3 ,5 ,7 }
Intersection of given arrays is : 
{ 2,3, }
*******************************************************************************/

#include <stdio.h>
void S_union(int a[],int n,int b[],int m)    //function definition for set union   
{  int i,j,k=0;
   int c[100];
    printf("a U b : ");
    printf("{ ");
    for( i=0;i<n;i++)
    {
        c[k] = a[i]; 
        k++;               
    }


    for(i=0;i<m;i++)
    {     
        int flag=0;              //declared flag             
        for(j=0;j<m;j++)
        {
            if(b[i] == c[j])
            {  
                flag =1;        //if element is same then flag got changed to 1
                break; 
            }
        }
        if(flag ==0)                
        {
            c[k] = b[i];          //otherwise assigned value of b
            k++;
        }
       
    }
    for(i=0;i<k;i++)
   {   if(i==k-1)              //for last element only
       {
           printf("%d",c[i]);
       }
       else
       printf("%d ,",c[i]);
   }
   
   printf(" }"); 
}
void S_inters(int a[],int n,int b[],int m)
{
    int i,j;
    printf("{ ");
   for(i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(a[j] == b[i])
           {   
               printf("%d,",a[j]);
           }
       }
   }
   printf(" }");
}
int main()
{
    int n,m,k=0;             
    int i,j;
    int c[100];
    printf("Enter size of array 1 and 2:");
    scanf("%d %d",&n,&m);
    
    int a[n],b[m];
    printf("Enter 1st array elements : ");
    for( i=0;i<n;i++)
    {
       scanf("%d",&a[i]); 
    }
    
    printf("Enter 2nd array elements : ");
    for(j=0;j<m;j++)
    {
       scanf("%d",&b[j]); 
    }
    printf("Given arrays are : \n");
    printf("a :");
    printf("{ ");
    for(int i=0;i<n;i++)
    {
        if(i==n-1)                 //for last element only
        {
            printf("%d",a[i]);
        }
        else
        printf("%d, ",a[i]);
    }
    printf(" }\n");
    printf("b :");
    printf("{ ");
    for(int j=0;j<m;j++)
    {
        if(j==m-1)                 //for last element only
        {
            printf("%d",b[j]);
        }
        else
        printf("%d, ",b[j]);
    }
    printf(" }\n");
    
    S_union(a,n,b,m);            //calling function
   
   printf("\nIntersection of given arrays is : \n");
   S_inters(a,n,b,m);
   return 0;
}
