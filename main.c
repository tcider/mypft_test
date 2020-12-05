/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcider <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 22:11:43 by tcider            #+#    #+#             */
/*   Updated: 2020/12/04 18:33:25 by tcider           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <math.h>
//#include <wchar.h>

int		ft_printf(const char *, ...);

int		main()
{

#ifdef UB
	printf("Undef.Behave.-------------\n");
	printf("%020.2s\n", "qwerty");
	ft_printf("%020.2s\n", "qwerty");
	printf("%020.2s\n", "");
	ft_printf("%020.2s\n", "");
	printf("-%s-\n", "");
	ft_printf("-%s-\n", "");
	printf("%020s\n", NULL);
	ft_printf("%020s\n", NULL);
	printf("%+5c\n", 'a');
	ft_printf("%+5c\n", 'a');
	printf("%05c\n", 'a');
	ft_printf("%05c\n", 'a');
	int *abc;
	*abc = 5;
	printf("%020p\n", abc);
	ft_printf("%020p\n", abc);
	printf("%.20p\n", abc);
	ft_printf("%.20p\n", abc);
	printf("%#020x\n", -10000000);
	ft_printf("%#020x\n", -10000000);
	printf("%.20x\n", -10000000);
	ft_printf("%.20x\n", -10000000);	
	printf("%% ------------\n");
	printf("Or - %d\n", printf("Or test %050.5% end\n"));
	printf("My - %d\n", ft_printf("My test %050.5% end\n"));
	printf("%020%\n");
	ft_printf("%020%\n");
	printf("My - %d\n", ft_printf("%\n"));
	printf("Or - %d\n", printf("%\n"));	
	printf(">%5%>\n");
	ft_printf(">%5%>\n");
	printf(">%-5%>\n");
	ft_printf(">%-5%>\n");
#endif
	printf("000d-------------\n");
	printf("Or - %d\n", printf("%.20d\n", -12345));
	printf("My - %d\n", ft_printf("%.20d\n", -12345));
	printf("000u-------------\n");
	printf("Or - %d\n", printf("%0*.10u\n", -20, 01));
	printf("My - %d\n", ft_printf("%0*.10u\n", -20, 01));
	printf("Or - %d\n", printf("%0*u\n", -20, 01));
	printf("My - %d\n", ft_printf("%0*u\n", -20, 01));

	printf("000i-------------\n");
	printf("Or - %d\n", printf("% .20i\n", -1000));
	printf("My - %d\n", ft_printf("% .20i\n", -1000));
	printf("000f-------------\n");	
	printf("Or - %d\n", printf("%+020f\n", (float)1000));
	printf("My - %d\n", ft_printf("%+020f\n", (float)1000));
	printf("000e-------------\n");	
	printf("Or - %d\n", printf("% 020e\n", (float)1000));
	printf("My - %d\n", ft_printf("% 020e\n", (float)1000));
	printf("000x-------------\n");	
	printf("Or - %d\n", printf("%#020x\n", 1000000));
	printf("My - %d\n", ft_printf("%#020x\n", 1000000));
	printf("000inf-------------\n");	
	printf("Or - %d\n", printf("%020f\n", INFINITY / INFINITY));
	printf("My - %d\n", ft_printf("%020f\n", INFINITY / INFINITY));
	printf("000f oversize----------\n");
	double cc = 92233720368547758070123.123;
	printf("Or - %d\n", printf("%050f\n", cc));
	printf("My - %d\n", ft_printf("%050f\n", cc));

	printf("n-------------\n");
	int i = 0;
	printf("Or - %d\n", printf("123%n456\n", &i));	
	printf("%d\n", i);
	i = 0;
	printf("My - %d\n", ft_printf("123%n456\n", &i));	
	printf("%d\n", i);

	printf("Xeh----------- \n");
	unsigned char num = 255;
	printf("Or - %d\n", printf("Or - %#-15.4hhx\n", num));
	printf("My - %d\n", ft_printf("My - %#-15.4hhx\n", num));
	int num2 = 2344355;
	printf("Or - %d\n", printf("Or - %#X\n", num2));
	printf("My - %d\n", ft_printf("My - %#X\n", num2));
	
	char *p;
	p = NULL;
	
	printf("Pointer-------------\n");
	printf("Or - %d\n", printf("%20p\n", &num));
	printf("My - %d\n", ft_printf("%20p\n", &num));
	printf("Or - %d\n", printf("%*p\n", 10, p));
	printf("My - %d\n", ft_printf("%*p\n", 10, p));

	printf("String-------------\n");
	printf("Or - %d\n", printf("%-2s\n", "abc"));
	printf("My - %d\n", ft_printf("%-2s\n", "abc"));
	printf("Or - %d\n", printf("%10.2s\n", p));
	printf("My - %d\n", ft_printf("%10.2s\n", p));

	printf("wstring-------------\n");
	printf("Or - %d\n", printf("%10ls\n", L"±§1"));
	printf("My - %d\n", ft_printf("%10ls\n", L"±§1"));

	printf("Char-------------\n");
	printf("Or - %d\n", printf("%20c\n", -1));
	printf("My - %d\n", ft_printf("%20c\n", -1));
	//printf("Or - %d\n", printf("Or - %lc\n", 266));//UB
	//printf("My - %d\n", ft_printf("My - %lc\n", 266));

	printf("nan-inf-------------\n");
	printf("Or - %d\n", printf("%-20.1F\n", -5 / (double)0));
	printf("My - %d\n", ft_printf("%-20.1F\n", -5 / (double)0));
	printf("Or - %d\n", printf("%.1E\n", (double)0 / (double)0));
	printf("My - %d\n", ft_printf("%.1E\n", (double)0 / (double)0));
	printf("Or - %d\n", printf("%.1f\n", INFINITY / INFINITY));
	printf("My - %d\n", ft_printf("%.1f\n", INFINITY / INFINITY));
	
	printf("f-------------\n");
	double x;
	x = 92233720368.0012;
	printf("Or - %d\n", printf("%+.11f\n", x));
	printf("My - %d\n", ft_printf("%+.11f\n", x));
	double y = -999.99999;
	printf("Or - %d\n", printf("Test fo preq %.*f end.\n", 3, y));
	printf("My - %d\n", ft_printf("Test fo preq %.*f end.\n", 3, y));
	printf("Or - %d\n", printf("%*f\n", 2, y));
	printf("My - %d\n", ft_printf("%*f\n", 2, y));

	printf("e-------------\n");
	double a = 0.00000000000000000000000000012;
	printf("Or - %d\n", printf("%030.11e\n", a));
	printf("My - %d\n", ft_printf("%030.11e\n", a));
	double b = 1.0000000000000012;
	printf("Or - %d\n", printf("%0*E\n", 40, b));
	printf("My - %d\n", ft_printf("%0*E\n", 40, b));
	double c = 137824799743235454355651.0012;
	printf("Or - %d\n", printf("%e\n", c));
	printf("My - %d\n", ft_printf("%e\n", c));

	printf("g-------------\n");
	printf("Or - %d\n", printf("%.*g\n", -7, x));
	printf("My - %d\n", ft_printf("%.*g\n", -7, x));
	printf("Or - %d\n", printf("%g\n", a));
	printf("My - %d\n", ft_printf("%g\n", a));
	printf("Or - %d\n", printf("%g\n", y));
	printf("My - %d\n", ft_printf("%g\n", y));
	printf("Or - %d\n", printf("%g\n", 999.9999));
	printf("My - %d\n", ft_printf("%g\n", 999.9999));
	printf("Or - %d\n", printf("%g\n", (double)10000000000000000));
	printf("My - %d\n", ft_printf("%g\n", (double)10000000000000000));
	printf("Or - %d\n", printf("%g\n", -1.00000114111110000001));
	printf("My - %d\n", ft_printf("%g\n", -1.00000114111110000001));
	printf("Or - %d\n", printf("%g\n", 1234567.1234567));
	printf("My - %d\n", ft_printf("%g\n", 1234567.1234567));
	printf("Or - %d\n", printf("%g\n", -100000.0123));
	printf("My - %d\n", ft_printf("%g\n", -100000.0123));
	printf("Or - %d\n", printf("%.8g\n", 0.00012345656565656));
	printf("My - %d\n", ft_printf("%.8g\n", 0.00012345656565656));
	printf("Or - %d\n", printf("%g\n", 0.0000112));
	printf("My - %d\n", ft_printf("%g\n", 0.0000112));
	printf("Or - %d\n", printf("%g\n", -1000000.0123));
	printf("My - %d\n", ft_printf("%g\n", -1000000.0123));
	printf("Or - %d\n", printf("%.*g\n", -2, 0.0011234556));
	printf("My - %d\n", ft_printf("%.*g\n", -2, 0.0011234556));
	printf("Or - %d\n", printf("%-20.1g\n", -5 / (double)0));
	printf("My - %d\n", ft_printf("%-20.1g\n", -5 / (double)0));
	printf("Or - %d\n", printf("%.1G\n", (double)0 / (double)0));
	printf("My - %d\n", ft_printf("%.1G\n", (double)0 / (double)0));
	printf("Or - %d\n", printf("%.1G\n", INFINITY / INFINITY));
	printf("My - %d\n", ft_printf("%.1G\n", INFINITY / INFINITY));


	printf("Negative width and prec---------\n");
	printf("My - %d\n", ft_printf("%.d\n", 0));
	printf("Or - %d\n", printf("%.d\n", 0));
	printf("My - %d\n", ft_printf("%010.*u\n", 0, 0));
	printf("Or - %d\n", printf("%010.*u\n", 0, 0));
	ft_printf("%010.*g\n", 0, 0.00);
	printf("%010.*g\n", 0, 0.00);
	printf("My - %d\n", ft_printf("%.*s\n", 0, "i"));
	printf("Or - %d\n", printf("%.*s\n", 0, "i"));
	ft_printf("%010.*e\n", 0, 0.00);
	printf("%010.*e\n", 0, 0.00);
	ft_printf("%.*f\n", 0, 0.00);
	printf("%.*f\n", 0, 0.00);
	ft_printf("%-01lm\n");
	printf("%-01lm\n");

	printf(">%5cdf%ddf%n%5c%16s>\n", ' ', 5, &i, 'a', "nark nark");
	ft_printf(">%5cdf%ddf%n%5c%16s>\n", ' ', 5, &i, 'a', "nark nark");
	printf("%%*i 42 == |%*i|\n", 3, 42);
	ft_printf("%%*i 42 == |%*i|\n", 3, 42);
	printf("%-8.5d>\n", 34);
	ft_printf("%-8.5d>\n", 34);
	printf("%7.3s%3.3s>\n", "hello", "world");
	ft_printf("%7.3s%3.3s>\n", "hello", "world");
	
	//printf("INT_MAX-%d, LL_MAX-%lld, UL_MAX-%lu\n", INT_MAX, LLONG_MAX, ULONG_MAX);
	return (0);
}
