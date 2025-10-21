#include "libft/libft.h"
#include "ft_printf.h"
#include "pipex.h"

int	conexion(char **argv, char **envp, int fd_infile, int fd_outfile)
{
	int		fd[2];
	pid_t	pid1;
	pid_t	pid2;

	if (pipe(fd) == -1)
		return (perror("pipe"), 1);
	pid1 = fork();
	if (pid1 < 0)
		return (perror("fork"), 1);
	else if (pid1 == 0)
		child1(argv, fd, envp, fd_infile);
	else
	{
		pid2 = fork();
		if (pid2 < 0)
			return (perror("fork"), 1);
		else if (pid2 == 0)
			child2(argv, fd, envp, fd_outfile);
		else
			parent(fd, pid1, pid2);
	}
	close(fd_infile);
	close(fd_outfile);
	return (0);
}

void	child1(char **argv, int *fd, char **envp, int fd_infile)
{
	char	*path;
	char	**cmdarg;

	close(fd[0]);
	dup2(fd_infile, STDIN_FILENO);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	close(fd_infile);
	if (!(path = pathcheck(envp,argv[2])))
		exit(1);
	cmdarg = ft_split(argv[2], ' ');
	if (!cmdarg)
	{
		free(path);
		exit(1);
	}
	execve(path, cmdarg, envp);
	free(path);
	free_split(cmdarg);
	perror("execve failed");
	exit(1);
}

void	child2(char **argv, int *fd, char **envp, int fd_outfile)
{
	char	*path;
	char	**cmdarg;

	close(fd[1]);
	dup2(fd[0], STDIN_FILENO);
	dup2(fd_outfile, STDOUT_FILENO);
	close(fd[0]);
	close(fd_outfile);
	if (!(path = pathcheck(envp,argv[3])))
		exit(1);
	cmdarg = ft_split(argv[3], ' ');
	if (!cmdarg)
	{
		free(path);
		exit(1);
	}
	execve(path, cmdarg, envp);
	free(path);
	free_split(cmdarg);
	perror("execve failed");
	exit(1);
}

void	parent(int *fd, pid_t pid1, pid_t pid2)
{	
    close(fd[0]);
    close(fd[1]);
    waitpid(pid1, NULL, 0);
    waitpid(pid2, NULL, 0);
}
