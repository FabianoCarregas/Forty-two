/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaugust <faaugust@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:15:02 by faaugust          #+#    #+#             */
/*   Updated: 2022/02/17 12:07:22 by faaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main()
{
	char	src[] = "testando123";
	char	dest[] = "";
	char	test='2';
	
	printf("%s", dest);
	ft_strcpy(dest, src);
	printf("%s-%c", dest, test);

	return(0);
}
