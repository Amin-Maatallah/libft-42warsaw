/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:36:27 by amaatall          #+#    #+#             */
/*   Updated: 2024/12/03 18:53:04 by amaatall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*res;
	int		i;
	int		l;

	if (!src)
		return (NULL);
	i = 0;
	l = 0;
	while (src[l] != '\0')
		l++;
	res = malloc(l);
	while (i <= l)
	{
		res[i] = src[i];
		i++;
	}
	return (res);
}
