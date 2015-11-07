/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:27:01 by abouvier          #+#    #+#             */
/*   Updated: 2015/01/24 00:08:53 by abouvier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "libft_cdefs.h"
# include "libft_types.h"
# include <stdarg.h>

/*
** Part 1
*/

void		*ft_memset(void *b, int c, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *s1, const void *s2, size_t n);
void		*ft_memccpy(void *s1, const void *s2, int c, size_t n);
void		*ft_memmove(void *s1, const void *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s);
char		*ft_strcpy(char *s1, const char *s2);
char		*ft_strncpy(char *s1, const char *s2, size_t n);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *s1, const char *s2);
char		*ft_strnstr(const char *s1, const char *s2, size_t n);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_atoi(const char *str);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);

/*
** Part 2
*/

void		*ft_memalloc(size_t size);
void		ft_memdel(void *ap);
char		*ft_strnew(size_t size);
void		ft_strdel(char **as);
void		ft_strclr(char *s);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s);
char		**ft_strsplit(char const *s, char c);
char		*ft_itoa(int n);
void		ft_putchar(char c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr(int n);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);

/*
** Bonus
*/

t_list		*ft_lstnew(void const *content, size_t content_size);
void		ft_lstdelone(t_list **alst, t_del del);
void		ft_lstdel(t_list **alst, t_del del);
void		ft_lstadd(t_list **alst, t_list *new);
void		ft_lstiter(t_list *lst, void (*f)(t_list *));
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *));

/*
** Extra
*/

extern char	**g_environ;

size_t		ft_strnlen(const char *s, size_t maxlen);
int			ft_isspace(int c);
void		ft_lstsort(t_list *alst, t_cmp cmp);
void		ft_lstadd_back(t_list **alst, t_list *new);
char		*ft_basename(char *path);
void		ft_lstdelif(t_list **alst, void *content, t_cmp cmp, t_del del);
char		*ft_strpad(const char *s, size_t pad_len, char pad_char, t_dir dir);
void		ft_putstr_pad(char const *s, size_t pad_len, t_dir dir);
void		ft_putnbr_pad(int n, size_t pad_len, char pad_char, t_dir dir);
size_t		ft_nbrlen(int n);
char		*ft_sanitize(const char *s);
int			ft_isdot(const char *s);
char		*ft_pathjoin(const char *p1, const char *p2);
char		*ft_itoa_base(int n, int base);
void		ft_putnbr_base(int n, int base);
size_t		ft_nbrlen_base(int n, int base);
char		*ft_strrepeat(char c, size_t len);
char		*ft_getenv(const char *name);
int			ft_unsetenv(const char *name);
int			ft_setenv(const char *name, const char *value, int overwrite);
int			ft_putenv(char *string);
int			ft_execvp(const char *file, char *const *argv);
char		*ft_strcjoin(char const *s1, char const *s2, char c);
char		*ft_escape(const char *s);
char		*ft_stradd(const char *s, char c);
char		*ft_implode(char *const *argv, char c);
int			ft_isblank(int c);
char		*ft_strpbrk(const char *s1, const char *s2);
void		*ft_calloc(size_t count, size_t size);
size_t		ft_strcspn(const char *s1, const char *s2);
size_t		ft_lstsize(const t_list *lst);
char		**ft_strsplitsplit(const char *s1, const char *s2);
char		*ft_strinsert(const char *s1, const char *s2, size_t n);
char		*ft_strcut(const char *s, size_t start, size_t n);
t_list		*ft_lstlast(const t_list *lst);
t_img		*ft_image_create(void *mlx, int width, int height);
void		ft_image_pixel_put(t_img *img, int x, int y, unsigned int color);
unsigned	ft_image_pixel_get(const t_img *img, int x, int y);
unsigned	ft_image_color(const t_img *img, int color);
t_img		*ft_image_create_xpm(void *mlx, char *xpm);
void		ft_image_write_ppm(const char *ppm, const t_img *img);
void		ft_image_destroy(t_img **img);
int			ft_abs(int j);
void		ft_memdeldel(void *aap);
void		ft_strdeldel(char ***aas);
void		*ft_realloc(void *ptr, size_t size, size_t new_size);
void		*ft_mallocalloc(size_t c1, size_t s1, size_t c2, size_t s2);
void		*ft_lsttbl(const t_list *lst);
int			ft_isnumber(const char *s);
void		ft_putptr(unsigned long ptr);
void		ft_putptr_pad(unsigned long ptr, size_t pad_len);
char		*ft_ultoa(unsigned long n);
char		*ft_ultoa_base(unsigned long n, unsigned int base);
char		*ft_ultoa_base_pad(unsigned long n, int base, size_t pad_len);
char		*ft_strtoupper(char *s);
void		ft_putstrs_fd(int fd, ...);
int			ft_socksrv(const struct addrinfo *ai, int backlog);
int			ft_sockcli(const struct addrinfo *ai);
void		ft_freeaddrinfo(struct addrinfo *ai);
void		ft_kthxbye(const char *s);
int			ft_printf(const char *format, ...);
int			ft_dprintf(int fd, const char *format, ...);
int			ft_vdprintf(int fd, const char *format, va_list ap);
uint32_t	ft_bswap_32(uint32_t x);
size_t		ft_tblsize(const void *atbl);
int			ft_log2(unsigned int x);
void		ft_image_clear(t_img *img);
int			ft_scandir(const char *dirname, t_list **namelist, t_filter filter,
	int (*compar)(const struct dirent **, const struct dirent **));
int			get_next_line(int const fd, char **line);
int			ft_sgn(long double x);
void		ft_lstfree(void *content, size_t content_size);
void		ft_lstswap(t_list *lst, t_list *mst);
size_t		ft_ulnbrlen_base(unsigned long n, unsigned int base);
int			ft_alphasort(const struct dirent **a, const struct dirent **b);
void		ft_qsort(void *base, size_t nmemb, size_t size, t_cmp compar);
void		ft_memswap(void *s1, void *s2, size_t n);
size_t		ft_lstlen(const t_list *lst);

#endif
