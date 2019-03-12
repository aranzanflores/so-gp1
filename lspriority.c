#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char ** argv){
	int  pid;
	int priority;
	pid = atoi(argv[1]);
	priority = atoi(argv[2]);
	priority = getpriority(pid);
	if(priority== -1){
		printf(1,"Process with ID %d not found \n", pid);
	}else{
		printf(1, "Process %d has priority %d \n", pid, priority);
	}
		
	exit();
}