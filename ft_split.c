/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaizenbe <aaizenbe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 15:59:16 by aaizenbe          #+#    #+#             */
/*   Updated: 2023/12/15 15:21:53 by aaizenbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_wordcount(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			word++;
			while (str[i] != c && str[i] != '\0')
				i++;
			if (str[i] == '\0')
				return (word);
		}
		i++;
	}
	return (word);
}

char	ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	return (*dest);
}

char	*ft_strndup(const char *src, size_t n)
{
	char	*dest;

	dest = (char *)malloc(n + 1);
	if (!dest)
		return (NULL);
	ft_strncpy(dest, src, n);
	dest[n] = '\0';
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	len;
	size_t	n;

	n = 0;
	str = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!str)
		return (NULL);
	while (*s != '\0')
	{
		if (*s != c)
		{
			len = 0;
			while (*s != '\0' && *s != c)
			{
				++len;
				++s;
			}
			str[n++] = ft_strndup(s - len, len);
		}
		else
			++s;
	}
	str[n] = 0;
	return (str);
}
