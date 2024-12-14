/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:44:51 by amaatall          #+#    #+#             */
/*   Updated: 2024/12/14 15:22:12 by amaatall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dst;

	if (size && SIZE_MAX / size < nmemb)
		return (NULL);
	dst = (void *)malloc(nmemb * size + 1);
	if (dst == NULL)
		return (NULL);
	ft_bzero(dst, size * nmemb);
	return (dst);
}
