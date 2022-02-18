/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaugust <faaugust@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:32:56 by faaugust          #+#    #+#             */
/*   Updated: 2022/02/17 12:18:36 by faaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int main()
{
	char	str[] = "egegEEEddddDe";
	
	ft_strupcase(str);
	
	printf("%s", str);
}
