/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mspasic <mspasic@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 17:35:00 by mspasic           #+#    #+#             */
/*   Updated: 2024/01/09 14:05:42 by mspasic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strlen(char *str);
char	*free_str(char **str);
char	*ft_strchr(const char *s, char c);
char	*ft_strjoin(char **str1, char **str2);
char	*ft_strdup(char *origstr, int part);
char	*find_new_line(char *s, int part);
char	*get_buff(int fd, char **tempbuff);
char	*resolve_line(char **tempbuff, char **buff, int n);
char	*get_next_line(int fd);
#endif