/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 14:16:12 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/03 15:50:28 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *b, int c, unsigned int len)
{
	int				i;
	unsigned char	a;

	i = 0;
	a = b;
	while (b < len)
	{
		a[i] = c;
		i++;
	}
	return (b);
}
