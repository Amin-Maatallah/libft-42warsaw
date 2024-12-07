/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:36:27 by amaatall          #+#    #+#             */
/*   Updated: 2024/12/07 16:27:13 by amaatall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *s2;

	if (!(s2 = (char *)malloc(ft_strlen(src) + 1)))
		return (0);
	ft_memcpy(s2, src, ft_strlen(src) + 1);
	return (s2);
}