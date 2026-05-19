#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    // O_RDONLY     O_WRONLY     O_RDWR     O_TRUNC     O_CREAT     O_APPEND
    fd = open("./LB.txt",O_RDWR);

    if (fd == -1)
    {
        printf("Unable to Open file \n");
    }
    else
    {        
        printf("file Gets succrsfully opened with fd : %d \n",fd);
    }
        
    return 0;
}