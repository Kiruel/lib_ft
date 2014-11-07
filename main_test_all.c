/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test_all.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 16:04:43 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/06 18:55:51 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//ajouter fonction comparaison de mots + modifier test

#include "libft.h"

int		ft_match(char *c, char *v)
{
	int i;

	i = 0;
	if (!c && !v)
		return (1);
	if (! (c && v))
		return (0);
	while (c[i] && v[i])
	{
		if (c[i] != v[i])
			return (0);
		i++;
	}
	return (c[i] == v[i]);
}

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
	if(ft_match(a1, b1))
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
	if(ft_match(a2, b2))
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
	e3 = memcpy(a3, b3, 3);
	f3 = ft_memcpy(c3, d3, 3);
	if (ft_match(e3, f3))
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}

//test ft_memccpy.c
	char *a4 = Remplirtoto();
	char *b4 = Remplirmaison();
	char *c4;
	char *d4 = Remplirtoto();
	char *e4 = Remplirmaison();
	char *f4;


	ft_putstr("TEST FT_MEMCCPY:\n");
	c4 = (char*)malloc(sizeof(char) * 20 + 1);
	c4 = memccpy(b4, a4, 111, 2);
	f4 = (char*)malloc(sizeof(char) * 20 + 1);
	f4 = ft_memccpy(e4, d4, 111, 2);
	if (ft_match(c4, f4))
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}

//test ft_memmove.c
	char *a5 = Remplirmaison();
	char *b5 = Remplirtoto();
	char *c5 = Remplirmaison();
	char *d5 = Remplirtoto();
	char *e5;
	char *f5;

	ft_putstr("TEST FT_MEMMOVE:\n");
	e5 = ft_memmove(a5, b5, 2);
	f5 = memmove(c5, d5, 2);
	if(ft_match(e5, f5))
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}

//test ft_strcpy.c
	char *a6 = Remplirmaison();
	char *b6 = Remplirtoto();
	char *c6;
	char *d6 = Remplirmaison();
	char *e6 = Remplirtoto();
	char *f6;

	ft_putstr("TEST FT_STRCPY:\n");
	c6 = strcpy(a6, b6);
	f6 = ft_strcpy(d6, e6);
	if(ft_match(c6, f6))
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}

//test ft_strlcat.c
/*	char *a7 = Remplirmaison();
	char *b7 = Remplirtoto();
	int c7;
*/
	ft_putstr("TEST FT_STRLCAT:\n");
	//c7 = strlcat(a7, b7, 5);
	//ft_putnbr(c7);
	ft_putstr("not test");
	ft_putchar('\n');

//test ft_strchr.c
	char *a8 = Remplirmaison();
	char *b8;
	char *c8 = Remplirmaison();
	char *d8;

	ft_putstr("TEST FT_STRCHR:\n");
	b8 = strchr(a8, 109);
	d8 = ft_strchr(c8, 109);
	if(ft_match(b8, d8))
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}

//test ft_strrchr.c
	char *a9 = Remplirtoto();
	char *b9;
	char *c9 = Remplirtoto();
	char *d9;

	ft_putstr("TEST FT_STRRCHR:\n");
	b9 = strrchr(a9, 116);
	d9 = ft_strrchr(c9, 116);
	if(ft_match(b9, d9))
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}
//test ft_strstr.c
	char a10[] = "Salut les gars!";
	char b10[] = "les";
	char *c10;
	char *d10;

	ft_putstr("TEST FT_STRSTR:\n");
	c10 = strstr(a10, b10);
	d10 = ft_strstr(a10, b10);
	if(ft_match(c10, d10))
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}
//test ft_strnstr.c
	char a11[] = "Salut les gars!";
	char b11[] = "les";
	char *c11;
	char *d11;
	char *e11;
	char *f11;

	ft_putstr("TEST FT_STRNSTR:\n");
	c11 = strnstr(a11, b11, 8);
	d11 = ft_strnstr(a11, b11, 8);
	e11 = strnstr(a11, b11, 9);
	f11 = ft_strnstr(a11, b11, 9);
	if(ft_match(c11, d11) && ft_match(e11, f11))
	{
		ft_putstr("OK\n");
	}
	else
	{
		ft_putstr("ERROR\n");
	}
	return (0);
}
