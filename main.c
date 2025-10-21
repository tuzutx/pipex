#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include "libft/libft.h"
#include "ft_printf.h"
#include "pipex.h"

int	main(int argc, char **argv, char **envp)
{
	int	fd;
	int	fd2;

	if (argc != 5)
	{
		ft_printf("Invalid numers of arguments. They must be 5 and you enter %d\n", argc);
		return (1);
	}
	if (fileopen(&fd, &fd2, argv) == 1) //This function opens the files; if something goes wrong, it raturns 1
		return (1);
	if (conexion(argv, envp, fd, fd2) == 1) // This runs de pipex; if sth goes wrong, it returns 1
	{
		ft_printf("Error: something went wrong during pipex execution\n");
		return (1);
	}
	return (0);
}

