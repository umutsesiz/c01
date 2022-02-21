/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 13:09:07 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/20 11:25:09 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int bolum;
	int mod;
	if(b != 0)
	{	bolum = (*a) / (*b);
		mod = (*a) % (*b);
		*a = bolum;
		*b = mod;
	}
}
int main(){
	int c;
	int d;
	int *a;
	int *b;
	c = 32;
	d = 10;
	a = &c;
	b = &d;
	ft_ultimate_div_mod(&c, &d);
	printf("a 32 iken %d oldu\n",*a);
	printf("b 10 iken %d oldu",*b);
	return (0);
}
