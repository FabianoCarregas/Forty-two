/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faaugust <faaugust@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 11:32:56 by faaugust          #+#    #+#             */
/*   Updated: 2022/02/17 12:15:10 by faaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);

int main()
{
	char	str[] = "e";
	
	ft_str_is_numeric(str);
	
	printf("%dvalor",ft_str_is_numeric(str));
}
