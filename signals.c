#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>


static void sighandler(int signo){
    if(signo==SIGINT){
        printf("exited due to SIGINT\n");
	exit(0);
}
    else if (signo==SIGUSR1){
printf("parent pid: %d\n", getppid()); 
    }
}


int main(){
  signal(SIGUSR1, sighandler);
  signal(SIGINT, sighandler);

    while(1){
      printf("hello i am %d\n", getpid());
      sleep(1);
    }
    
    return 0;
}
