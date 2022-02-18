/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaugust <faaugust@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:32:56 by faaugust          #+#    #+#             */
/*   Updated: 2022/02/17 12:13:51 by faaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main()
{
	char	src[12] = "umdoistres";
	char	dest[10] = "";

	unsigned int i = 12;
	
	ft_strncpy (dest, src, i);
	
	printf ("%s", dest);
	return (0);
}
