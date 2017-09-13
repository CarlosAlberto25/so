#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

main(){
	int return_value;
	printf("Creando procesos con fork\n");
	return_value=fork();
	if(return_value==0)
		printf("El pid del proceso hijo es %d\n", getpid());
	else
		printf("El pid del proceso padre es %d\n", getpid());
}
