#include "libc.h"
#include "get.h"
#include <unistd.h>

int ft_popen(const char *file, char *const argv[], char type)
{
    if (!file || !argv || (type != 'r' &&  type != 'w'))
        return (-1);
    int fd[2];
    int pid;
    if (pipe(fd) == -1) return -1;
    pid = fork();
    if (pid == -1)
    {
        close(fd[1]);
        close(fd[0]);
        return (-1);
    }
    if (pid  == 0)
    {
        if (type == 'r')
        {
            if (dup2(fd[1], 1) == -1)
                exit(1);

        }
        else if (type == 'w')
        {
            if (dup2(fd[1], 0) == -1)
                exit(1);
        }
        close(fd[1]);
        close(fd[0]);
        execvp(file, argv);
        exit(1);
    }
    if (type == 'r')
    {
        close(fd[1]);
        return (fd[0]);
    }
    else
    {
        close(fd[0]);
        return (fd[1]);
    }
}

// int main()
// {
//     int  fd;
//     char *line;

//     fd = ft_popen("ls", (char *const []){"ls", NULL}, 'r');
//     while ((line = get_next_line(fd)))
//         puts(line);
//     return (0);
// }

// picoshell



int    picoshell(char **cmds[])
{
    int pid;
    int status;
    int i = 0;
    int fd[2];
    int fd_prev = -1;
    int exit_s = 0;
    while (cmds[i])
    {
        if (cmds[i +1 ] &&  pipe(fd) == -1)
            return (-1);
        pid = fork();
        if (pid == -1)
        {
            if (cmds[i + 1])
            {
                close(fd[1]);
                close(fd[0]);
            }
            return (1);
        }
        if (pid == 0)
        {

            if (fd_prev != -1)
            {
                if (dup2( fd_prev, 0) == -1)
                    exit(1);
                close(fd_prev);
            }
            if (cmds[i + 1])
            {
                close(fd[0]);
                if (dup2(fd[1], 1) == -1)
                    exit(1);
                close(fd[1]);
            }
            execvp(cmds[0][i], cmds[i]);
            exit(1);
        }
        if (fd_prev != -1)
            close(fd_prev);
        if (cmds[i + 1])
        {
            close(fd[1]);
            fd_prev = fd[0];
        }
        i++;
    }
    while (wait(&status) != -1)
    {
        if (WIFEXITED(status) && WEXITSTATUS(status) !=0)
            exit_s = 1;
    }
    return exit_s;
}

static int count_cmds(int argc, char **argv)
{
    int count = 1;
    for (int i = 1; i < argc; i++)
    {
        if (strcmp(argv[i], "|") == 0)
            count++;
    }
    return count;
}

int main(int argc, char **argv)
{
    if (argc < 2)
        return (fprintf(stderr, "Usage: %s cmd1 [args] | cmd2 [args] ...\n", argv[0]), 1);

    int cmd_count = count_cmds(argc, argv);
    char ***cmds = calloc(cmd_count + 1, sizeof(char **));
    if (!cmds)
        return (perror("calloc"), 1);

    // Parsear argumentos y construir array de comandos
    int i = 1, j = 0;
    while (i < argc)
    {
        int len = 0;
        while (i + len < argc && strcmp(argv[i + len], "|") != 0)
            len++;
        
        cmds[j] = calloc(len + 1, sizeof(char *));
        if (!cmds[j])
            return (perror("calloc"), 1);
        
        for (int k = 0; k < len; k++)
            cmds[j][k] = argv[i + k];
        cmds[j][len] = NULL;
        
        i += len + 1;  // Saltar el "|"
        j++;
    }
    cmds[cmd_count] = NULL;

    int ret = picoshell(cmds);

    // Limpiar memoria
    for (int i = 0; cmds[i]; i++)
        free(cmds[i]);
    free(cmds);

    return ret;
}




//the real calsulature







