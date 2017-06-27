#include "libft.h"

int 	main(void)
{
	int		fd;
	int		ret;
	char	buf[32];

	fd = open("42",O_RDONLY | O_CREAT);
	if (fd == -1)
	{
		ft_putstr("open() error");
		return (1);
	}
	ret = read(fd, buf, 32);
	buf[ret] = '\0';
	ft_putstr(buf);
	ft_putnbr(ret);
	if (close(fd) == -1)
	{
		ft_putstr("close() error");
		return (1);
	}
}
