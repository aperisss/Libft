/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperis <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:45:07 by aperis            #+#    #+#             */
/*   Updated: 2021/12/02 15:51:26 by aperis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_toupper( int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
