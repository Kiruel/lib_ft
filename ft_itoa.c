/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 17:28:38 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/10 17:34:40 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
valeur d'entree  >>> int = 156
valeur de sortie >>> char = "156"

afficher >>> 100
-diviser 156 par 10, 2 fois.


*/
char	*ft_itoa(int n)
{
	int i;
	char *result;

	i = 0;
	while (i != 0)
	{
		n /= 10;
		i++;
	}
	result = (char*)malloc(sizeof(char) * i + 1);
	result[i] = '\0';
	while ()
	return (result);
}
