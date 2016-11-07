#include <stdio.h>
#include <stdlib.h>

int main()
{
	int pid;
	int status =0;
	int getchildpid,getparentid,i;
	for (i=0;i<3;i++)
		{
		pid=fork();
		if(pid !=0)
		{
			printf("Parent: son_pid%d\n",pid);
			pid=wait(&status);
		}
		else
		{
			getparentid=getppid();
			getchildpid=getpid();
			printf("Son: parent_pid:%d	Son_pid:%d\n",getparentid,getchildpid);
			exit(status);
		}
	
	}
}
