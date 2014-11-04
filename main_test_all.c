/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:04:43 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/04 17:10:51 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//ajouter fonction comparaison de mots + modifier test

#include "libft.h"

void	*Remplirtoto()
{
	char *poulet;

	poulet = (char*)malloc(sizeof(char) * 5);
	poulet[0] = 't';
	poulet[1] = 'o';
	poulet[2] = 't';
	poulet[3] = 'o';
	poulet[4] = '\0';
	return (poulet);
}

void	*Remplirmaison()
{
	char *poulet;

	poulet = (char*)malloc(sizeof(char) * 7);
	poulet[0] = 'm';
	poulet[1] = 'a';
	poulet[2] = 'i';
	poulet[3] = 's';
	poulet[4] = 'o';
	poulet[5] = 'n';
	poulet[6] = '\0';
	return (poulet);
}

int		main()
{
//test ft_memset.c
	char *a1;
	char *b1;

	ft_putstr("TEST FT_MEMSET:\n");
	a1 = (char*)malloc(sizeof(char) * 10 + 1);
	a1 = memset(a1, 110, 3);
	b1 = (char*)malloc(sizeof(char) * 10 + 1);
	b1 = ft_memset(a1, 110, 3);
	if(a1 == b1)
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}

//test ft_bzero.c
	char *a2 = Remplirtoto();
	char *b2 = Remplirtoto();

	ft_putstr("TEST FT_BZERO:\n");
	ft_bzero(a2, 2);
	bzero(b2, 2);
	if(a2[3] == b2[3])
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}

//test ft_memcpy.c
	char *a3 = Remplirmaison();
	char *b3 = Remplirtoto();
	char *c3 = Remplirmaison();
	char *d3 = Remplirtoto();
	char *e3;
	char *f3;

	ft_putstr("TEST FT_MEMCPY:\n");
	e3 = ft_memcpy(a3, b3, 2);
	ft_putstr(e3);
	ft_putchar('\n');
	f3 = memcpy(c3, d3, 2);
	ft_putstr(f3);
	ft_putchar('\n');
	if(*e3 == *f3)
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}

//test ft_memccpy.c
	char a4[] = "toto";
	char b4[] = "maison";
	char *c4;

	ft_putstr("TEST FT_MEMCCPY:\n");
	c4 = (char*)malloc(sizeof(char) * 10 + 1);
	c4 = ft_memccpy(b4, a4, 111, 4);
	ft_putstr(c4);
	ft_putchar('\n');
	return (0);
}
