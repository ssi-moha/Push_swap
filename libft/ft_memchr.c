/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 11:07:32 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/14 16:30:03 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char *i;

	i = (char*)s;
	while (n--)
	{
		if (*i == (char)c)
			return (i);
		i++;
	}
	return (NULL);
}
