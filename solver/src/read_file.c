/*
** EPITECH PROJECT, 2022
** dante
** File description:
** file reader
*/

#include "my.h"
#include "my_printf.h"

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char *read_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    struct stat stats = {};
    char *file = NULL;

    if (fd == -1)
        return NULL;
    stat(filepath, &stats);
    file = malloc(sizeof(char) * (stats.st_size + 1));
    if (!file)
        return NULL;
    read(fd, file, stats.st_size);
    file[stats.st_size] = '\0';
    close(fd);
    return file;
}
