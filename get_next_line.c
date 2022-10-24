
#include <unistd.h> 
#include <stdio.h> //for printf, use only in main,DELETE AFTER TESTING
#include <fcntl.h> // for open
#include "get_next_line.h"

int main(void)
{
    int fd;

    fd = open("file.txt", O_RDONLY);
    printf("This is the line: %s",get_next_line(fd));
    printf("This is the line: %s",get_next_line(fd));
    printf("This is the line: %s",get_next_line(fd));
    printf("This is the line: %s",get_next_line(fd));
    printf("This is the line: %s",get_next_line(fd));
    printf("This is the line: %s",get_next_line(fd));
    printf("This is the line: %s",get_next_line(fd));
    printf("This is the line: %s",get_next_line(fd));

}
//
char *get_next_line(int fd)
{
    static char     *buffer;
    char            *currentL;

    if (fd < 0)
        return (NULL);
    while (buffer != '\n')
    {
        *buffer++;
    }
}