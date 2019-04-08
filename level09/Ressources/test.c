#include <fcntl.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int fd;
	char buf[26];

	i = -1;
	fd = open(av[1], O_RDONLY);
	read(fd, &buf, 25);
	while (++i < 25)
		buf[i] = (unsigned char)(buf[i] - i);
	write(1, buf, 25);
	write(1, "\n", 1);
}
