/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmarco-a <rmarco-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 18:47:01 by rmarco-a          #+#    #+#             */
/*   Updated: 2022/02/04 00:12:21 by rmarco-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	int	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		write (1, &letra, 1);
		letra++;
	}
}
