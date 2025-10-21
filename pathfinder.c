#include "libft/libft.h"
#include "ft_printf.h"
#include "pipex.h"

int	fileopen(int *fd, int *fd2, char **argv)
{
	*fd = open(argv[1], O_RDONLY);
	if (*fd == -1)
	{
		perror("Error al abrir el archivo");
		return (1);
	}
	*fd2 = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (*fd2 == -1)
    {
        perror("Error al abrir/crear el archivo de salida");
        return (1);
    }
	return (0);
}

char	**pathlist(char **envp)
{
	int		index;

	index = 0;
	while (envp[index] && ft_strnstr(envp[index], "PATH=", 5) == NULL)
		index++;
	if (!envp[index])
		return (NULL);
	return (ft_split(envp[index] + 5, ':'));
}

void	free_split(char **paths)
{
	int	i;

	if (!paths)
		return ;
	i = 0;
	while (paths[i])
	{
		free(paths[i]);
		i++;
	}
	free(paths);
}

char	*pathcheck(char **envp, char *command)
{
	char	**paths;
	int		i;
	char	*fullpath;
	char	*temp;
	char	**tempcmd;

	i = 0;
	paths = pathlist(envp);
	if(!paths)
		return (NULL);
	while (paths[i])
	{
		temp = ft_strjoin(paths[i], "/");
		tempcmd = ft_split(command, ' ');
		fullpath = ft_strjoin(temp, tempcmd[0]);
		free(temp);
		free(tempcmd);
		if (access(fullpath, X_OK) == 0)
			return (fullpath);
		free(fullpath);
		i++;
	}
	free_split(paths);
	return (NULL);
}
