#include "apue.h"
#include <sys/wait.h>




void err_sys(const char* x) 
{ 
    perror(x); 
    exit(1); 
}

int main()
	{
	printf("Llamada a un programa usando execlp:\n\n");
	execlp("/bin/ls","/bin/ls","-F","-l",NULL);

		//ls es el comando que lista el contenido de la directorio actual.
		//La opción -F muestra el final del nombre del archivo un caracter
		//que representa su tipo.
		//La opción -l hace que los archivos se listen verticalmente y
		//muestren otros datos relativos a los mismos.
	
	printf("En caso de que la llamada falle, este mensaje \ndebera aparecer en pantalla.\n");
	exit(0);
	}
