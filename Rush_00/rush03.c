/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarco-a <rmarco-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:41:19 by rmarco-a          #+#    #+#             */
/*   Updated: 2022/02/07 17:10:08 by rmarco-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);
void	ft_putchar(char c);
void	p_u_linha(int i, int x);
void	meios(int i, int x);

void	p_u_linha(int i, int x)
{
	if (i == 1)
		ft_putchar('A');
	else if (i == x)
		ft_putchar('C');
	else
		ft_putchar('B');
}

void	meios(int i, int x)
{
	if (i == x || i == 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x < 1 || y < 1)
		ft_putchar('\n');
	else
	{
		while (j < y)
		{
			i++;
			if (j == 0 || j == y - 1)
				p_u_linha(i, x);
			else
				meios(i, x);
			if (i == x)
			{
				ft_putchar('\n');
				j++;
				i = 0;
			}
		}
	}
}
