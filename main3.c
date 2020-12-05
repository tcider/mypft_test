/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abirthda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 12:51:33 by abirthda          #+#    #+#             */
/*   Updated: 2020/12/03 13:00:16 by tcider           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include <stdio.h>
#include <stdint.h>

int				ft_printf(const char *str, ...);

void	check_res(int a, int b)
{
    printf("return value: ");
	a == b ? printf("\033[0;32m") : printf("\033[0;31m");
	a == b ? printf("OK: ") : printf("KO: ");
	printf("\033[0m");	
	printf("yours = %d, expected = %d\n\n", a, b);
}

int		main(void)
{

	char *s = "Hello";
	intmax_t a;
	intmax_t b;
//	while (1)
//	{

	printf("test 1:\n");
	a = ft_printf("|%10.0d|\n", 0);
	b = printf("|%10.0d|\n", 0);
	check_res(a, b);
	
	printf("test 2:\n");
	a = ft_printf("|%10.0d|\n", 10);
	b = printf("|%10.0d|\n", 10);
	check_res(a, b);

	printf("test 3:\n");
	a = ft_printf("|%.3d|\n", -12);
	b = printf("|%.3d|\n", -12);
	check_res(a, b);

	printf("test 4:\n");
	a = ft_printf("%");
	printf("|\n");
	b = printf("%");
	printf("|\n");
	check_res(a, b);

	printf("test 5:\n");
	a = ft_printf("%0");
	printf("|\n");
	b = printf("%0");
	printf("|\n");	
	check_res(a, b);

	printf("test 6:\n");
	a = ft_printf("|%p|\n", s);
	b = printf("|%p|\n", s);
	check_res(a, b);

	printf("test 7:\n");
	a = ft_printf("|%20p|\n", s);
	b = printf("|%20p|\n", s);
	check_res(a, b);

	printf("test 8:\n");
	a = ft_printf("|%20.18p|\n", s);
	b = printf("|%20.18p|\n", s);
	check_res(a, b);

	printf("test 9:\n");
	a = ft_printf("|%-20.18p|\n", s);
	b = printf("|%-20.18p|\n", s);
	check_res(a, b);

	printf("test 10:\n");
	a = ft_printf("|%020.18p|\n", s);
	b = printf("|%020.18p|\n", s);
	check_res(a, b);

	printf("test 11:\n");
	a = ft_printf("|%20.18p|\n", s);
	b = printf("|%20.18p|\n", s);
	check_res(a, b);

	printf("test 12:\n");
	a = ft_printf("|%20.25p|\n", s);
	b = printf("|%20.25p|\n", s);
	check_res(a, b);

	printf("test 13:\n");
	a = ft_printf("|%d|\n", -2147483648);
	b = printf("|%d|\n", -2147483648);
	check_res(a, b);

	printf("test 14:\n");
	a = ft_printf("|%20d|\n", -2147483648);
	b = printf("|%20d|\n", -2147483648);
	check_res(a, b);

	printf("test 15:\n");
	a = ft_printf("|%20.18d|\n", -2147483648);
	b = printf("|%20.18d|\n", -2147483648);
	check_res(a, b);

	printf("test 16:\n");
	a = ft_printf("|%20.d|\n", -2147483648);
	b = printf("|%20.d|\n", -2147483648);
	check_res(a, b);

	printf("test 17:\n");
	a = ft_printf("|%020d|\n", -2147483648);
	b = printf("|%020d|\n", -2147483648);
	check_res(a, b);

	printf("test 18:\n");
	a = ft_printf("|%-20.18d|\n", -2147483648);
	b = printf("|%-20.18d|\n", -2147483648);
	check_res(a, b);

	printf("test 19:\n");
	a = ft_printf("|%020.18d|\n", -2147483648);
	b = printf("|%020.18d|\n", -2147483648);
	check_res(a, b);

	printf("test 20:\n");
	a = ft_printf("|%020.18d|\n", 123);
	b = printf("|%020.18d|\n", 123);
	check_res(a, b);

	printf("test 21:\n");
	a = ft_printf("|%020.18x|\n", 123);
	b = printf("|%020.18x|\n", 123);
	check_res(a, b);

	printf("test 22:\n");
	a = ft_printf("|%020.18d|\n", 0);
	b = printf("|%020.18d|\n", 0);
	check_res(a, b);

	printf("test 23:\n");
	a = ft_printf("|%020.18x|\n", 0);
	b = printf("|%020.18x|\n", 0);
	check_res(a, b);

	printf("test 24:\n");
	a = ft_printf("|%020.d|\n", 123);
	b = printf("|%020.d|\n", 123);
	check_res(a, b);

	printf("test 25:\n");
	a = ft_printf("|%020.x|\n", 123);
	b = printf("|%020.x|\n", 123);
	check_res(a, b);
	
	printf("test 26:\n");
	a = ft_printf("|%%|\n");
	b = printf("|%%|\n");
	check_res(a, b);

	printf("test 27:\n");
	a = ft_printf("|%020%|\n");
	b = printf("|%020%|\n");
	check_res(a, b);

	printf("test 28:\n");
	a = ft_printf("|%-20%|\n");
	b = printf("|%-20%|\n");
	check_res(a, b);

	printf("test 29:\n");
	a = ft_printf("|%5%|\n");
	b = printf("|%5%|\n");
	check_res(a, b);

	printf("test 30:\n");
	a = ft_printf("|%010.5%|\n");
	b = printf("|%010.5%|\n");
	check_res(a, b);

	printf("test 31:\n");
	a = ft_printf("|%-10.5%|\n");
	b = printf("|%-10.5%|\n");
	check_res(a, b);

	printf("test 32:\n");
	a = ft_printf("|%-10.%|\n");
	b = printf("|%-10.%|\n");
	check_res(a, b);

	printf("test 33:\n");
	a = ft_printf("|%010.%|\n");
	b = printf("|%010.%|\n");
	check_res(a, b);

	printf("test 34:\n");
	a = ft_printf("|%.%|\n");
	b = printf("|%.%|\n");
	check_res(a, b);

	printf("test 35:\n");
	a = ft_printf("|%.5%|\n");
	b = printf("|%.5%|\n");
	check_res(a, b);
//	}
}

