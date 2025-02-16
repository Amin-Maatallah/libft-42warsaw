/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:18:24 by amaatall          #+#    #+#             */
/*   Updated: 2024/12/09 19:18:44 by amaatall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	str;

	i = 0;
	str = (char)c;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == str)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
