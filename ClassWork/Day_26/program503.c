#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    fd = creat("./LB.txt",0777);

    if (fd == -1)
    {
        printf("Unable to create file \n");
    }
    else
    {        
        printf("file Gets succrsfully gets creatd with fd : %d \n",fd);
    }
        
    return 0;
}