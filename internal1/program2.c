#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Linux Directory Structure\n\n");

    printf("Root Directory (/):\n");
    system("ls /");

    printf("\nHome Directory (/home):\n");
    system("ls /home");

    printf("\nEtc Directory (/etc):\n");
    system("ls /etc");

    printf("\nUsr Directory (/usr):\n");
    system("ls /usr");

    printf("\nVar Directory (/var):\n");
    system("ls /var");

    return 0;
}