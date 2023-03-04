/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:38:03 by ebmarque          #+#    #+#             */
/*   Updated: 2023/03/04 12:38:03 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <time.h>
#include <stdlib.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}

/*
void	print_tab(int *tab, int size)
{
	printf("{");
	for (int i = 0; i < size; i++)
	{
		if (i != size - 1)
		{
			printf("%d, ", tab[i]);
		}
		else
		{
			printf("%d}\n",tab[i]);
		}
	}
}
int main(void)
{
	srand(time(NULL));
	int size;
	
	size = rand() % 16;
	int *tab = (int *)malloc(sizeof(int) * size);
	for (int k = 0; k < size; k++)
	{
		tab[k] = rand() % 101 - 50;
	}
	printf("VETOR GERADO = ");
	print_tab(tab, size);
	printf("Apos organizacao ->\nVETOR ORGANIZADO = ");
	ft_sort_int_tab(tab, size);
	print_tab(tab, size);	
	return 0;
}
*/