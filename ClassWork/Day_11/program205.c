#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd = 0, iRet = 0;
    char FileName[20];
    char Data[50];

    printf("Enter the name of File : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open \n");
        return -1;
    }

    iRet = read(fd,Data,5);

    printf("%d Bytes gets succfully read \n",iRet);

    printf("Data from file : %s\n", Data);

    close(fd);

    return 0;
}