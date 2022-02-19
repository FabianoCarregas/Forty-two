/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaugust <faaugust@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:53:49 by faaugust          #+#    #+#             */
/*   Updated: 2022/02/18 23:18:28 by faaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0') && (0 < n))
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
