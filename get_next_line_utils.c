/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/02 20:09:11 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/05 17:47:46 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "fcntl.h"

char *get_next_line(int fd)
{
    //read text file, if repeated calls with loop, do line by line. can select file descriptor
    //return line that was read
    //if nothing left to read return or error return null
    //make it worth with stdinput and reading from file

    //returned line needs to include a terminating \n, except for the end which doesn't need ones

    // read file descriptor

    // print the charactcers

    // i + 1 == =\n 
    
    // next call of get next line should start at the \n
    
}

int main(void)
{
    int fd;
    char buffer[256];
    int chars_read;

    fd = open("dingus.txt", O_RDONLY);
    while((chars_read = read(fd, buffer, 15)))
    {
        buffer[chars_read] = '\0';
        printf("buffer : %s\n", buffer);
    }
}