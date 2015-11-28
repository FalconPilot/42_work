/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpallies <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 12:52:42 by rpallies          #+#    #+#             */
/*   Updated: 2015/11/26 09:12:12 by rpallies         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
int			ft_isalnum(int c);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
char		*ft_itoa(int n);
void		*ft_memalloc(size_t size);
void		*ft_memcpy(void *dst, void *src, size_t n);
void		ft_memdel(void **ap);
void		*ft_memset(void *b, int c, size_t len);
void		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl(const char *s);
void		ft_putendl_fd(const char *s, int fd);
void		ft_putnbr(int n);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr(const char *s);
void		ft_putstr_fd(const char *s, int fd);
char		*ft_strcat(char *s1, const char *s2);
void		ft_strclr(char *s);
int			ft_strcmp(const char *s1, const char *s2);
void		ft_strdel(char **as);
char		*ft_strdup(const char *s1);
int			ft_strequ(const char *s1, const char *s2);
void		ft_striter(char *s, void (*f)(char*));
size_t		ft_strlcat(char *str, const char *src, size_t size);
size_t		ft_strlen(const char *s);
char		*ft_strmap(const char *s, char (*f)(char));
char		*ft_strncat(char *s1, const char *s2, size_t n);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_strnequ(const char *s1, const char *s2, size_t n);
char		*ft_strnew(size_t size);
char		*ft_strstr(const char *s1, const char *s2);
int			ft_toupper(int c);
int			ft_tolower(int c);

#endif
