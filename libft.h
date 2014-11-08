/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:38:20 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/06 15:47:07 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <stdlib.h>
# include <unistd.h>
# include <strings.h>
# include <ctype.h>

int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_atoi(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strstr(char *s1, char *s2);
char	*ft_strnstr(char *s1, char *s2, size_t n);
char	*ft_strrchr(char *s, int c);
char	*ft_strchr(char *s, int c);
size_t	ft_strlcat(char *dst, char *src, size_t n);
char	*ft_strcat(char *dst, char *src);
char	*ft_strncat(char *dst, char *src, size_t n);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
void	*ft_memmove(void *dst, void *src, size_t len);
char	*ft_strcat(char *dst, char *src);
void	*ft_memccpy(void *dst, void *src, int c, size_t n);
void	*ft_memcpy(void *dst, void *src, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_strlen(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putnbr(int nb);
#endif
