#include <stdio.h>
main () 
{
    int pid;
    int status;
    status = 0;
        if ((pid=fork()) < 0 ) 
        {
            printf("Sorry...cannot fork\n");
        }
        else if (pid ==0) 
        {
            printf("Child is going to sleep. \n");
            sleep(5);
            printf("Child finished sleeping. \n");
            
        }
        else 
        {
            printf("Parent starting wait. \n");
            wait(&status);
            printf("Parent finished wait. \n");

        }
    exit(0);
}
