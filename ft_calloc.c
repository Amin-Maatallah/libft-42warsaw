/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:44:51 by amaatall          #+#    #+#             */
/*   Updated: 2024/12/07 16:25:59 by amaatall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t tot_size;
	void *dst;

	tot_size = size * n;
	if (!(dst = malloc(tot_size)))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}