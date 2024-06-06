#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
int main(){
	int fd;
	fd = open("/sys/class/users/leds/brightness",O_WRONLY);
	write(fd , "1", 1);
	sleep(1);
	write(fd, "0", 1);
	sleep(1);
	close(fd);
}
	
