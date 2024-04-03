/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:32:57 by mspasic           #+#    #+#             */
/*   Updated: 2024/01/09 14:12:09 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*free_str(char **str)
{
	free(*str);
	*str = NULL;
	return (*str);
}

char	*ft_strchr(const char *s, char c)
{
	int		i;
	char	*ptr;

	i = 0;
	if (!s)
		return (NULL);
	ptr = (char *)s;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			ptr = (char *)&s[i];
			return (ptr);
		}
		i++;
	}
	ptr = NULL;
	return (ptr);
}

char	*ft_strjoin(char **str1, char **str2)
{
	int		i;
	int		j;
	int		str1_l;
	int		str2_l;
	char	*str;

	i = 0;
	j = 0;
	str1_l = ft_strlen(*str1);
	str2_l = ft_strlen(*str2);
	str = (char *)malloc(str1_l + str2_l + 1);
	if (str)
	{
		while (i < str1_l)
		{
			str[i] = (*str1)[i];
			i++;
		}
		while (j < str2_l)
			str[i++] = (*str2)[j++];
		str[i] = '\0';
	}
	free_str(str1);
	free_str(str2);
	return (str);
}

char	*ft_strdup(char *origstr, int part)
{
	char	*copy;
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (part == 1)
		n = ft_strlen(origstr);
	else
	{
		while (origstr[n] != '\n')
			n++;
		n++;
	}
	copy = (char *)malloc(n + 1);
	if (origstr == NULL || origstr[0] == '\0' || !copy)
		return (free_str(&copy));
	while (i < n)
	{
		copy[i] = origstr[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
