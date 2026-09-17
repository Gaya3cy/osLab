#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Current Directory\n");
    system("pwd");

    printf("\nfiles\n");
    system("ls -1");
    
    printf("\nCreating Directory\n");
    system("mkdir Demo");
    
    printf("\nListing Files Again\n");
    system("ls");

    printf("\nRemoving Directory\n");
    system("rmdir Demo");

    return 0;
}
