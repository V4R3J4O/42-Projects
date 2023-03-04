/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebmarque <ebmarque@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 12:31:23 by ebmarque          #+#    #+#             */
/*   Updated: 2023/03/04 12:31:23 by ebmarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i <= size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size -1 - i];
		tab[size -1 - i] = swap;
		i++;
	}
}

// int	main(void)
// {
// 	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
// 	ft_rev_int_tab(tab, 10);
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d, ", tab[i]);
// 	}
// 	return 0;
// }
