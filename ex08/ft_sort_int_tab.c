/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:23:34 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/20 13:45:24 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int kova;

	while(size >= 0)
	{
		i = 0;
		while(i < (size - 1))
		{
			if(tab[i] > tab[i + 1])
			{
				kova = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = kova;
			}
			i++;
		}
		size--;
	}
}
int	main()
{
	int tab[6] = {7, 6, 3, 4, 2, 5};
	int size = 6;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5]); 
	return (0);
}	
