/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaugust <faaugust@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:34:29 by faaugust          #+#    #+#             */
/*   Updated: 2022/02/10 13:08:14 by faaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	helper(char *p);

void	ft_print_comb2(void)
{
	char	p[5];

	p[0] = '0';
	p[1] = '0';
	p[2] = ' ';
	p[3] = '0';
	p[4] = '1';
	helper(&p[0]);
}

void	helper(char *p)
{
	while (p[0] <= '9')
	{
		while (p[1] <= '9')
		{
			while (p[3] <= '9')
			{
				while (p[4] <= '9')
				{
					write(1, p, 5);
					if (!(p[0] == '9' && p[1] == '8'))
						write(1, ", ", 2);
					p[4]++;
				}
				p[4] = '0';
				p[3]++;
			}
			p[1]++;
			p[3] = p[0];
			p[4] = p[1] + 1;
		}
		p[0]++;
		p[1] = '0';
		p[3] = p[0];
		p[4] = p[1] + 1;
	}
}
