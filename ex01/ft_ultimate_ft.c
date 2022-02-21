/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 17:35:09 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/16 18:06:20 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(){

	int *********pn1;
	int ********pn2;
	int *******pn3;
	int ******pn4;
	int *****pn5;
	int ****pn6;
	int ***pn7;
	int **pn8;
	int *pn9;
	int nbr;
		nbr = 3;

		pn9 = &nbr;
		pn8 = &pn9;
		pn7 = &pn8;
		pn6 = &pn7;
		pn5 = &pn6;
		pn4 = &pn5;
		pn3 = &pn4;
		pn2	= &pn3;
		pn1 = &pn2;

ft_ultimate_ft(pn1);
printf("%d",nbr);
return 0;
}
