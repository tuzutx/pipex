

//The main declaration can have an extra argument, char **envp, which is an 2D array of char terminated by a NULL pointer. Here is an example :

#include <stdio.h>

int main(int argc, char **argv, char **envp)
{
   int index = 0;
   while (envp[index])
       printf("%s\n", envp[index++]);
   return 0;
}
