/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pevil <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:53:29 by pevil             #+#    #+#             */
/*   Updated: 2019/08/04 17:36:32 by pevil            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 && j == 0) || (i == x - 1 && j == y - 1))
				ft_putchar('/');
			else if ((i == 0 && j == y - 1) || (i == x - 1 && j == 0))
				ft_putchar('\\');
			else if ((j == 0 || j == y - 1) && (i != 0 || i != x - 1))
				ft_putchar('*');
			else if ((i == 0 || i == x - 1) && (j != 0 || j != y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
