# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tcider <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 17:44:02 by tcider            #+#    #+#              #
#    Updated: 2020/12/05 11:13:32 by tcider           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PFT_DIR = ../

all:
	$(MAKE) -C $(PFT_DIR)

test: all
	clang $(FLAGS) -g -fsanitize=address main.c -L. -lftprintf

test_ub: all
	gcc main.c -D UB=1 -L. -lftprintf

test2: all
	gcc main2.c -L. -lftprintf

test3: all
	gcc main3.c -L. -lftprintf

test_clean:
	$(NAKE) fclean -C $(PFT_DIR)
	rm -f a.out
	rm -rf a.out.dSYM

