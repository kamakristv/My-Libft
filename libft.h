/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redna <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:02:27 by redna             #+#    #+#             */
/*   Updated: 2021/11/06 20:32:35 by redna            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
int		ft_memcmp(const void *buf1, const void *buf2, size_t count);
size_t	ft_strlen(const char *str);
void	*ft_memset(void *buf, int ch, size_t count);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_bzero(void *buf, size_t count);
void	*ft_memmove(void *dst, const void *src, size_t len);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_atoi(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
void	*ft_calloc(size_t n, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
void	*ft_memchr(const void *arr, int c, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
void	ft_putchar_fd(char	c, int	fd);
void	ft_putstr_fd(char *s, int fd);
char	*ft_substr(char const	*s, unsigned int	start, size_t len);
void	ft_putnbr_fd(int	n, int	fd);
void	ft_putendl_fd(char	*s, int	fd);
char	*ft_strdup(const char	*str);
char	*ft_strjoin(char const	*s1, char const	*s2);
char	*ft_substr(char const	*s, unsigned int	start, size_t	len);

#endif
