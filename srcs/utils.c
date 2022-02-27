/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dienasci <dienasci@student.42sp.org.br >   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:18:06 by dienasci          #+#    #+#             */
/*   Updated: 2022/02/26 20:32:34 by dienasci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	free_2d_array(char **a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
}

void	print_array(int *a, size_t size, const char *id)
{
	int i;

	i = 0;
	printf("%s", id);
	printf("%p:", a);
	if(a != NULL)
	{
		while ((size_t)i < size)
		{
			printf("[%d]", a[i]);
			i++;
		}
	}
	else
		printf("null");
	printf("\n");
}
