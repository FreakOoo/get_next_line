/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/12/02 20:09:11 by mchopin       #+#    #+#                 */
/*   Updated: 2025/12/11 20:22:56 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// ft_strlen()
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
// ft_strchr()
char	*ft_strchr(const char *str, char c)
{
	int	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char)c)
		{
			return ((char *)&str[i]);
		}
		i++;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
// ft_strdup()
char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*dst;

	i = 0;
	len = ft_strlen(s);
	dst = (char *)malloc(sizeof(*s) * (len + 1));
	if (!dst)
		return (NULL);
	while (i < len)
	{
		dst[i] = s[i];
		i++;
	}
	dst[len] = '\0';
	return (dst);
}
// ft_strjoin()
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		j;

	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (NULL);
	i = 0;
	j = 0;
	mem = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 2) * sizeof(char));
	if (!mem)
		return (NULL);
	while (s1[i])
		mem[j++] = s1[i++];
	i = 0;
	while (s2[i])
		mem[j++] = s2[i++];
	mem[j] = '\0';
	return (mem);
}

// ft_substr()
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	str = malloc(len + 1);
	if (!str)
		return (0);
	while (s[start] && i < len)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
// int	main(void)
// {
// 	printf("%zu\n", ft_strlen("hello"));
// 	printf("%s\n", ft_strchr("sphinx of black quartz", 'x'));
// 	printf("%s\n", ft_strjoin("sphinx of ", "BLACK QUARTZ"));
// 	printf("%s\n", ft_strdup("Sphinx Of Black Quartz"));
// 	printf("%s\n", ft_substr("Sphinx of Black Quartz", 3, 10));
// }