#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <fcntl.h>
# include <stddef.h>
# include "libft/libft.h"
# include "ft_printf.h"
# include <sys/types.h>
# include <sys/wait.h>
# include <unistd.h>

int		fileopen(int *fd, int *fd2, char **argv);
char	**pathlist(char **envp);
void	free_split(char **paths);
char	*pathcheck(char **envp, char *command);
void	free_split(char **paths);
int		conexion(char **argv, char **envp, int fd_infile, int fd_outfile);
void	child1(char **argv, int *fd, char **envp, int fd_infile);
void	child2(char **argv, int *fd, char **envp, int fd_outfile);
void	parent(int *fd, pid_t pid1, pid_t pid2);

#endif
