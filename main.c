// Binary Search
#include <stdio.h>

int main()
{
    int a[9]={11,12,13,14,15,16,17,18,19};
    int low=0, high=8;
    int key,mid;
    int flag=0;
    printf("Enter the number to search:");
    scanf("%d",&key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else if (key>a[mid])
        {
            low=mid+1;
            
        }
        else{
            high=mid-1;
        }
        
    }
    if(flag==1)
    { printf("Number  %d found at position %d. \n",key,mid+1); }
    
       else
       
    { printf("Number  %d does not exist in the array.\n",key);}
     
    return 0;
}
