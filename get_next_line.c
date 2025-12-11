/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/06 21:36:04 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/11 18:12:13 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_part(int fd, char *stash)
{
	char	*BUFFER;
	int		bytes_read;
	char	*tmp;

	BUFFER = malloc(BUFFER_SIZE + 1);
	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	while (!ft_strchr(stash, '\n'))
	{
		bytes_read = read(fd, BUFFER, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(stash), free(BUFFER), NULL);
		if (bytes_read == 0)
			return (NULL);
		tmp = stash;
		stash = ft_strjoin(stash, BUFFER);
		free(tmp);
	}
	// check with valgrind if it still frees whenI get a newline in the while loop
	free(BUFFER);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*tmp;
	char		*pos;
	int			len;

	stash = read_part(fd, stash);
	if (!stash)
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	if (stash[0] == '\0')
		return (NULL);
	pos = ft_strchr(stash, '\n');
	len = (pos - stash) + 1;
	line = ft_substr(stash, 0, len);
	tmp = stash;
	stash = ft_substr(stash, len, (ft_strlen(stash) - len));
	free(tmp);
	return (line);
}

int	main(void)
{
	int		fd;
	char	buffer[256];
	int		chars_read;

	fd = open("bible.txt", O_RDONLY);
	printf("%s\n", get_next_line(fd));
	// while ((chars_read = read(fd, buffer, 100)))
	// {
	// 	buffer[chars_read] = '\0';
	// 	printf("buffer : %s\n", buffer);
	// }
	// close(fd);
}
