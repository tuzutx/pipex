#include <fcntl.h>

int	main(int argc, char **argv, char **envp)
{
	int	fd;
	int	fd2;

	if (argc != 5)
	{
		ft_printf("Invalid numers of arguments. They must be 5 and you enter %d", argc);
		return (1);
	}
	if (fileopen(&fd, &fd2, argv) == 1)  //This function opens the files; if something goes wrong, it raturns 1
		return (1);
}

int	fileopen(int *fd, int *fd2, char **argv)
{
	*fd = open(argv[1], O_RDONLY);
	if (*fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	if (argv[4])
	{
		*fd2 = open(argv[4], O_TRUNC);
		if (*fd2 == -1)
		{
			perror("Error al abrir el archivo");
			return (1);
		}
	}
	else
	{
		*fd2 = open(argv[4], O_CREATE);
		if (*fd2 == -1)
		{
			perror("Error al abrir el archivo");
			return (1);
		}
	}
	return (0);
}

char	**pathlist(char **envp)
{
	int		index;
	char	*path;

	index = 0;
	while (ft_strnstr(envp[index], "PATH=") == NULL)
		index++;
	path = malloc(strlen(envp[index]));
	if (path == NULL)
		return (NULL);
	path = envp[index];
	return (ft_split(path, ':'));
}

void	pathcheck(char **envp, char *argv)
{
	char	**pathlists;
	int		index;
	char	**newargv;

	newargv = malloc(ft_strlen(ft_split(argv, ' ')));
	if (pathlists == NULL)
		return ;
	newargv = ft_split(argv, ' ');
	pathlists = malloc(ft_strlen(pathlist(envp)));
	if (pathlists == NULL)
		return ;
	pathlists = pathlist(envp);
	while (access(ft_strjoin(pathlists[index], newargv[0]), F_OK) == -1)
		index++;
	return
}
