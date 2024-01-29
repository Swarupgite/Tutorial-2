#include<stdio.h>

int CalculateLength(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    char Arr[40];

    printf("Enter your name : \n");
    scanf("%[^'\n']s",Arr);

    printf("Your name is : %s\n",Arr);

    iRet = CalculateLength(Arr);

    printf("Length of string is : %d",iRet);

    return 0;
}