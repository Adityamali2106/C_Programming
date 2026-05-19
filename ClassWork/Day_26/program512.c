#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    int fd = 0;
    int iRet = 0;
    char Arr[] = "Maharashtra";

    fd = open("./JanuaryX.txt",O_RDWR | O_APPEND);

    if (fd == -1)
    {
        printf("Unable to Open file \n");
    }
    else
    {        
        printf("file Gets succrsfully opened with fd : %d \n",fd);

        iRet = write(fd,Arr,11);
        
        printf("%d bytes fets succesfully written into file\n",iRet);
        close(fd);
    }
        
    return 0;
}