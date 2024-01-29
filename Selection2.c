#include<stdio.h>

int main()
{

    int Standard = 0;

    printf("Primary School Portal\n");

    printf("Enter Your Division : \n");
    scanf("%d",&Standard);

    if(Standard == 1)
    {
        printf("your exam is 1PM\n");
    }
    else if(Standard == 2)
    {
        printf("Your exam is at 2PM\n");
    }
    else if(Standard == 3)
    {
        printf("your exam is at 3 PM\n");
    }
    else if(Standard == 4)
    {
        printf("your exam is at 4 PM\n");
    }
    else 
    {
        printf("Invalid standard\n");
    }

    return 0;

}