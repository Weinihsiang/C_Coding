
#include<stdio.h>
#include<string.h>

int main(int argc,char*argv[])
{	
    FILE *source,*target;
    char ch;

    if(argc!=3)
    {
        printf("Command Error!!Insufficient arguments.\n");
        return;
    }
    
    source=fopen(argv[1],"r");//r = read mode
    target=fopen(argv[2],"w");//w = write mode

    if(source==NULL || target==NULL)
    {
        printf("Unable to open file.\n");
        return;
    }

    while((ch=fgetc(source))!=EOF)
        fputc(ch,target);/*writing to the target file*/

    printf("Copy is Successful.\n");

    fclose(source);
    fclose(target);
}
