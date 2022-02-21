/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:12:45 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/18 12:17:04 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int kova;
	kova = *a;
	*a  = *b;
	*b = kova;
}

int main(){
	int x;
	int y;
    
	x = 3;
	y = 6;
	int *a = &x;
	int *b = &y;
	
	ft_swap(a,b);
	printf("x in değeri : %d\n",*a);
	printf("y nin değeri : %d",*b);
	return 0;
}
