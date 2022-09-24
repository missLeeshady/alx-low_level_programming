#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

/**
* main - the entry point
* void: the return value
* Return: always 0
*/

int main(void)
{
	int fd[2];

	fd[2] = open("file.txt", O_RDWR);

	write (2, buf2 , 77);
	 
	return (1);

}
