/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:25:54 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/20 11:49:55 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1,&c,1);
}

void	ft_putstr(char *str)
{
	while(*str != 0)
	{
		ft_putchar(*str);
		str++;
	}
}

int	main()
{
	char str[] = "Umut Sesiz";
	char *puts;
	puts = str;
	ft_putstr(puts);

}
