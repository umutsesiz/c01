/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 12:44:11 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/18 13:07:58 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}

int	main(){
	int x;
	int y;
	int *c;
	int *r;
	int u;
	int m;
	x = 20;
	y = 3;
	c = &u;
	r = &m;

	ft_div_mod(x, y, c, r);
	printf("a nın b ye bölümü : %d\n",*c);
	printf("a nın b ye bölümünden kalan : %d\n",*r);
	return 0;
}
