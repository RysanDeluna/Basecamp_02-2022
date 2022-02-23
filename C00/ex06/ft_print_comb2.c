/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarco-a <rmarco-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 14:43:48 by rmarco-a          #+#    #+#             */
/*   Updated: 2022/02/09 17:02:51 by rmarco-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);
void	int_converter(int num, char *ten, char *unity);
void	show_duo(int num1, int num2);

void	int_converter(int num, char *ten, char *unity)
{
	if (num >= 10)
	{
		*unity = (num % 10) + '0';
		*ten = (num / 10) + '0';
	}
	else
	{
		*ten = '0';
		*unity = num + '0';
	}
}

void	show_duo(int num1, int num2)
{
	char	ten;
	char	unity;

	int_converter(num1, &ten, &unity);
	write(1, &ten, 1);
	write(1, &unity, 1);
	write(1, " ", 1);
	int_converter(num2, &ten, &unity);
	write(1, &ten, 1);
	write(1, &unity, 1);
	if (num1 < 98)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	num2 = 0;
	while (num1 < 99)
	{
		while (num2 < 99)
		{
			num2++;
			show_duo(num1, num2);
		}
		num1++;
		num2 = num1;
	}
}
