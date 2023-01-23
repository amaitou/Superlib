/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:11:52 by amait-ou          #+#    #+#             */
/*   Updated: 2023/01/24 00:07:54 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./superlib.h"

static int	helper(const char *s, va_list args)
{
	int	i;

	i = 0;
	if (*s == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (*s == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (*s == '%')
		i = ft_putchar('%');
	else if (*s == 'x')
		i = ft_printhex(va_arg(args, t_ui), "0123456789abcdef");
	else if (*s == 'X')
		i = ft_printhex(va_arg(args, t_ui), "0123456789ABCDEF");
	else if (*s == 'd' || *s == 'i')
		i = ft_putsigned(va_arg(args, int));
	else if (*s == 'u')
		i = ft_putunsigned(va_arg(args, t_ui));
	else if (*s == 'p')
	{
		i = ft_putstr("0x");
		i += ft_printhex(va_arg(args, t_ul), "0123456789abcdef");
	}
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		l;

	va_start(args, s);
	l = 0;
	while (*s)
	{
		if (*s == '%')
		{
			++s;
			l += helper(s, args);
			++s;
		}
		else
		{
			l += ft_putchar(*s);
			++s;
		}
	}
	va_end(args);
	return (l);
}
