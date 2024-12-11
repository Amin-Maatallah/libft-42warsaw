/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:44:51 by amaatall          #+#    #+#             */
/*   Updated: 2024/12/11 23:40:07 by amaatall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*dst;

	if (n == 0 || size == 0)
		return (malloc(0));
	if (size && SIZE_MAX / size < n)
		return (NULL);
	dst = malloc(n * size);
	if (dst == NULL)
		return (NULL);
	ft_memset(dst, 0, size * n);
	return (dst);
}
