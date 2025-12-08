/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/06 21:36:04 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/07 18:38:31 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//Maxime Chopin -
#include "get_next_line.h"

char	*get_next_line(int fd)
{	

	// read text file, if repeated calls with loop,
	//	do line by line. can select file descriptor
	// return line that was read
	// if nothing left to read return or error return null
	// make it worth with stdinput eeande reading from file
	// returned line needs to include a terminating \n,
	//	except for the end which doesn't need ones
	// read file descriptor
	// print the charactcers
	// i + 1 == =\n
	// next call of get next line should start at the \n
	// open funct, read func,
}

int	main(void)
{
	int fd;
	char buffer[256];
	int chars_read;

	fd = open("bible.txt", O_RDONLY);
	while ((chars_read = read(fd, buffer, 100)))
	{
		buffer[chars_read] = '\0';
		printf("buffer : %s\n", buffer);
	}
	close(fd);

	// close this guy at the end
}
