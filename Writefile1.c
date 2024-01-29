#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char Arr[] = "PREPLACEMENT ACTIVITY";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR | O_APPEND);

    Ret = write(fd,Arr,22);  // (Kashat Lihaycha, kay Lihaycha, Kiti Lihaycha)
    
    printf("%d bytes gets written in the file\n",Ret);
    close(fd);

    return 0;
}

// O_RDWR : Read+write
