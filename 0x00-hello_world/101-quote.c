#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 *main - Entry point
 *Return: 0 (success)
 */
int main(void)
{
	char message[] = "and that piece of art is useful\" - "
			 "Dora Korpar, 2015-10-19\n";
	int fd = open("/dev/stderr", O_WRONLY);

	if (fd != -1)
	{
		write(fd, message, sizeof(message) - 1);
		close(fd);
	}
	return (1);
}
