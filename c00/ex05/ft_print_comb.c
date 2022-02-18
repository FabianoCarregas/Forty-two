/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaugust <faaugust@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:34:30 by faaugust          #+#    #+#             */
/*   Updated: 2022/02/11 01:40:31 by faaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	func_while(char a, char b, char c);

void	ft_print_comb(void)
{
	char	n[3];

	n[0] = '0';
	while (n[0] <= '7')
	{
		n[1] = n[0] + 1;
		while (n[1] <= '8')
		{
			n[2] = n[1] + 1;
			while (n[2] <= '9')
			{
				func_while(n[0], n[1], n[2]);
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}

void	func_while(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
	{
		write(1, ", ", 2);
	}
}