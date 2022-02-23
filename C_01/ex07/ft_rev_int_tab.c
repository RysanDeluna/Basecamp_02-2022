/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarco-a <rmarco-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:01:33 by rmarco-a          #+#    #+#             */
/*   Updated: 2022/02/10 16:16:25 by rmarco-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;
	int	s;

	i = 0;
	s = size / 2;
	while (size-- > s)
	{
		aux = *(tab + i);
		*(tab + i) = *(tab + size);
		*(tab + size) = aux;
		i++;
	}
}
