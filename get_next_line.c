/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/06 21:36:04 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/11 20:28:06 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*read_part(int fd, char *stash)
{
	char	*buffer;
	int		bytes_read;
	char	*tmp;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	while (!ft_strchr(stash, '\n'))
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (free(stash), free(buffer), NULL);
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		tmp = stash;
		stash = ft_strjoin(stash, buffer);
		free(tmp);
	}
	return (free(buffer), stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;
	char		*tmp;
	char		*pos;
	int			len;

	line = NULL;
	stash = read_part(fd, stash);
	if (!stash)
		return (NULL);
	if (stash[0] == '\0')
	{
		free(stash);
		stash = NULL;
		return (NULL);
	}
	len = ft_strlen(stash);
	pos = ft_strchr(stash, '\n') + 1;
	if (pos)
		len = (pos - stash);
	line = ft_substr(stash, 0, len);
	tmp = stash;
	stash = ft_substr(stash, len, (ft_strlen(stash) - len));
	free(tmp);
	return (line);
}

int	main(void)
{
	int		fd;
	char	*str;

	fd = 0;
	str = (char *)1;
	fd = open("./bible.txt", O_RDONLY);
	while (str)
	{
		str = get_next_line(fd);
		printf("%s", str);
		free(str);
	}
	close(fd);
}
