#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;

    fd = open("./January.txt",O_RDWR | O_CREAT,0777);

    if (fd == -1)
    {
        printf("Unable to Open file \n");
    }
    else
    {        
        printf("file Gets succrsfully opened with fd : %d \n",fd);
        iRet = write(fd,"Jay Ganesh",3);
        printf("%d bytes fets succesfully written into file\n",iRet);
        close(fd);
    }
        
    return 0;
}