/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 17:51:48 by etheodor          #+#    #+#             */
/*   Updated: 2014/11/07 17:13:47 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;

	if (s1[0] == 0 && s2[0] == 0)
		return ((char*)s1);
	while (*s1)
	{
		if (s2[i] == 0)
			return ((char*)s1);
		if (*s1 == *s2)
		{
			i = 0;
			while (s1[i] == s2[i])
			{
				i++;
				if (s2[i] == 0)
					return ((char*)s1);
			}
		}
		s1++;
	}
	return (0);
}
