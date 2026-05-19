#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = open("./LB.txt",O_RDWR);

    if (fd == -1)
    {
        printf("Unable to Open file \n");
    }
    else
    {        
        printf("file Gets succrsfully opened with fd : %d \n",fd);
        write(fd,"Jay Ganesh",10);
        close(fd);
    }
        
    return 0;
}