#include "apue.h"
#include <sys/wait.h>


void err_sys(const char* x) 
{ 
    perror(x); 
    exit(1); 
}

  main()
  {
     pid_t pid;
     char *pathvar;
     char newpath[1000];

     pathvar = getenv("PATH");
     strcpy(newpath, pathvar);
     strcat(newpath, "/home/mauricio/CURSO_INTEL/Procesos_Code/");
     setenv("PATH", newpath,1);

     if ((pid = fork()) == -1)
        perror("fork error");
     else if (pid == 0) {
        execlp("echoall", "echoall", NULL);
        printf("Return not expected. Must be an execlp error.n");
     }
  }
