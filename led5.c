#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
	int i,fd;
	fd = open("/sys/class/users/leds/brightness",O_WRONLY);
	for (i=1;i<=i+1;i++)
	{
	printf("led on\n");
	write(fd , "1", 1);
	sleep(1);
	printf("led off\n");
	write(fd, "0", 1);
	sleep(1);
	}
	close(fd);
}

