/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: usesiz <usesiz@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 11:50:41 by usesiz            #+#    #+#             */
/*   Updated: 2022/02/20 12:04:20 by usesiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

int 	ft_strlen(char *str)
{
	int c;
	
	c = 0;
	while(str[c] != '\0')
	{
		c++;
	}
	return(c);
}
int main()
{
	char str[] = "Umut";

	int c = ft_strlen(str);
	printf("%d\n",c);
}

