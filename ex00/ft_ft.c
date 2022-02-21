/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:01:04 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/15 18:28:21 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}
int 	main(void){
	int nbr;
	int *p_nbr;

	nbr = 13;
	p_nbr = &nbr;

	ft_ft(p_nbr);
	printf("%d",nbr);
	return 0;
}
