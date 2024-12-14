/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaatall <amaatall@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:44:51 by amaatall          #+#    #+#             */
/*   Updated: 2024/12/14 16:17:53 by amaatall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t bytes;
	void *ptr;

	bytes = nmemb * size;
	if (size && ((bytes / size) != nmemb))
		return (NULL);
	ptr = malloc(bytes);
	if (NULL == ptr)
		return (NULL);
	ft_bzero(ptr, bytes);
	return (ptr);
}