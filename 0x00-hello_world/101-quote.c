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
	const char message = "and that piece of art is useful\"
		- Dora Korpar, 2015-10-19\n";
	int fd = open("/dev/stderr", O_WRONLY);

	if (fd != -1)
	{
		write(fd, message, strlen(message));
		close(fd);
	}
	return (1);
}

