/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarco-a <rmarco-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 18:15:48 by rmarco-a          #+#    #+#             */
/*   Updated: 2022/02/09 17:02:19 by rmarco-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	show_nbr(char *str, int end);

void	show_nbr(char *str, int end)
{
	while (end-- > 0)
		write (1, (str + end), 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		flag_negative;
	char	str[100];

	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	else if (nb < 0)
	{
		flag_negative = 1;
		nb = nb + 1;
		nb = nb * -1;
	}
	while (nb != 0)
	{
		if (flag_negative == 1 && i == 0)
			str[i++] = ((nb % 10) + 1) + '0';
		else
			str[i++] = (nb % 10) + '0';
		nb = nb / 10;
	}
	if (flag_negative == 1)
		str[i++] = '-';
	str[i++] = '\0';
	show_nbr(str, i);
}
