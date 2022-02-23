/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarco-a <rmarco-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 20:53:20 by rmarco-a          #+#    #+#             */
/*   Updated: 2022/02/09 22:23:36 by rmarco-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void);
void	print_fake(int num[3]);

void	print_fake(int num[3])
{
	int		i;
	char	c;

	i = 2;
	while (i >= 0)
	{
		c = num[i] + '0';
		write (1, &c, 1);
		i--;
	}
	if (!(num[0] == 9 && num[1] == 8 && num[2] == 7))
		write(1, ", ", 2);
}	

void	ft_print_comb(void)
{
	int	n[3];

	n[0] = 0;
	n[1] = 0;
	n[2] = 0;
	while (n[2] < 9)
	{
		while (n[1] < 9)
		{
			while (n[0] < 9)
			{
				n[0]++;
				if (n[0] != n[1] && n[1] != n[2])
					print_fake (n);
			}
			n[0] = n[1] + 1;
			n[1]++;
		}
		n[1] = n[2] + 1;
		n[2]++;
	}
}
