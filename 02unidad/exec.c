#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

main(){
	pid_t pid;
	pid = fork();
	if(pid<0){
		fprintf(stderr, "Fallo en fork()");
		exit(-1);
	}
	else if(pid==0)
		execlp("/bin/ls", "ls", NULL);
	else{
		wait(NULL);
		printf("Proceso hijo concluido");
		exit(0);
	}
}
