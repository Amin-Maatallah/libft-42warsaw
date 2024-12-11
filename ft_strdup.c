/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:36:27 by amaatall          #+#    #+#             */
/*   Updated: 2024/12/12 00:01:02 by amaatall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s2;

	if (!src)
		return (NULL);
	s2 = (char *)malloc(ft_strlen(src));
	if (!(s2))
		return (NULL);
	ft_memcpy(s2, src, ft_strlen(src));
	return (s2);
}
