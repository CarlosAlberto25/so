#include <unistd.h>
#include <stdio.h>

main(){
	printf("Creando procesos con fork\n");
	fork();
	printf("El pid del proceso es %d\n", getpid());
}
