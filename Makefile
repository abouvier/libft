#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouvier <abouvier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/19 11:27:36 by abouvier          #+#    #+#              #
#    Updated: 2016/05/27 09:29:04 by abouvier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
CC ?= gcc
CFLAGS += -ansi -pedantic-errors -Wall -Werror -Wextra -Wpedantic -Wshadow
CPPFLAGS += -iquote include -MMD
ifeq ($(shell uname),Linux)
	CPPFLAGS += -D_POSIX_C_SOURCE=200112L
endif
VPATH = src
SRCS = ft_abs.c \
	ft_alphasort.c \
	ft_asprintf.c \
	ft_atoi.c \
	ft_basename.c \
	ft_bswap32.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_complex_abs.c \
	ft_complex_add.c \
	ft_complex_arg.c \
	ft_complex_div.c \
	ft_complex_equ.c \
	ft_complex_exp.c \
	ft_complex_init.c \
	ft_complex_log.c \
	ft_complex_mul.c \
	ft_complex_pow.c \
	ft_complex_powi.c \
	ft_complex_sqrt.c \
	ft_complex_sub.c \
	ft_dprintf.c \
	ft_escape.c \
	ft_execvp.c \
	ft_fmin.c \
	ft_freeaddrinfo.c \
	ft_fsgnl.c \
	ft_fsquarel.c \
	ft_getenv.c \
	ft_image_clear.c \
	ft_image_color.c \
	ft_image_create_xpm.c \
	ft_image_create.c \
	ft_image_destroy.c \
	ft_image_pixel_get.c \
	ft_image_pixel_put.c \
	ft_image_write_ppm.c \
	ft_implode.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isblank.c \
	ft_isdigit.c \
	ft_isdot.c \
	ft_isnumber.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_itoa_base.c \
	ft_itoa.c \
	ft_kthxbye.c \
	ft_log2.c \
	ft_lstadd_back.c \
	ft_lstadd_new.c \
	ft_lstadd.c \
	ft_lstdel.c \
	ft_lstdelif.c \
	ft_lstdelone.c \
	ft_lstfree.c \
	ft_lstiter.c \
	ft_lstlast.c \
	ft_lstlen.c \
	ft_lstmap.c \
	ft_lstnew_nocopy.c \
	ft_lstnew.c \
	ft_lstsize.c \
	ft_lstsort.c \
	ft_lststr.c \
	ft_lstswap.c \
	ft_lsttbl.c \
	ft_mallocalloc.c \
	ft_memalloc.c \
	ft_memccpy.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memdel.c \
	ft_memdeldel.c \
	ft_memmove.c \
	ft_memset.c \
	ft_memswap.c \
	ft_nbrlen_base.c \
	ft_nbrlen.c \
	ft_pathjoin.c \
	ft_printf.c \
	ft_putchar_fd.c \
	ft_putchar.c \
	ft_putendl_fd.c \
	ft_putendl.c \
	ft_putenv.c \
	ft_putlst_fd.c \
	ft_putnbr_base.c \
	ft_putnbr_fd.c \
	ft_putnbr_pad.c \
	ft_putnbr.c \
	ft_putptr_pad.c \
	ft_putptr.c \
	ft_putstr_fd.c \
	ft_putstr_pad.c \
	ft_putstr.c \
	ft_qsort.c \
	ft_realloc.c \
	ft_sanitize.c \
	ft_scandir.c \
	ft_setenv.c \
	ft_sockcli.c \
	ft_socksrv.c \
	ft_stradd.c \
	ft_strcat.c \
	ft_strchr.c \
	ft_strcjoin.c \
	ft_strclr.c \
	ft_strcmp.c \
	ft_strcpy.c \
	ft_strcspn.c \
	ft_strcut.c \
	ft_strdel.c \
	ft_strdeldel.c \
	ft_strdup.c \
	ft_strequ.c \
	ft_strinsert.c \
	ft_striter.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlen.c \
	ft_strmap.c \
	ft_strmapi.c \
	ft_strncat.c \
	ft_strncmp.c \
	ft_strncpy.c \
	ft_strnequ.c \
	ft_strnew.c \
	ft_strnlen.c \
	ft_strnstr.c \
	ft_strpad.c \
	ft_strpbrk.c \
	ft_strrchr.c \
	ft_strrepeat.c \
	ft_strsplit.c \
	ft_strsplitsplit.c \
	ft_strstr.c \
	ft_strstrdel.c \
	ft_strsub.c \
	ft_strtoupper.c \
	ft_strtrim.c \
	ft_tblsize.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_ulmin.c \
	ft_ulnbrlen_base.c \
	ft_ultoa_base_pad.c \
	ft_ultoa_base.c \
	ft_ultoa.c \
	ft_unsetenv.c \
	ft_vasprintf.c \
	ft_vdprintf.c \
	get_next_line.c \
	printf.c
OBJS := $(SRCS:%.c=$(VPATH)/%.o)
DEPS := $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $?
	ranlib $@

$(OBJS): Makefile

clean:
	$(RM) $(OBJS) $(DEPS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean

-include $(DEPS)
