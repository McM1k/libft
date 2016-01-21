/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gboudrie <gboudrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/21 18:07:38 by gboudrie          #+#    #+#             */
/*   Updated: 2016/01/21 18:10:53 by gboudrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_strlenc(char *s, char c)
{
	int		i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	return (i);
}
