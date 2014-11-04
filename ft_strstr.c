/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etheodor <etheodor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/07/09 17:51:48 by etheodor          #+#    #+#             */
/*   Updated: 2014/07/09 19:04:49 by etheodor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;

	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			while (str[i] == to_find[i])
			{
				i++;
				if (to_find[i] == '\0')
					return (str);
			}
		}
		str++;
	}
	return ('\0');
}
