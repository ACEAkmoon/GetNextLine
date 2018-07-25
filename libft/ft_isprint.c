/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akrushin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/22 16:00:23 by akrushin          #+#    #+#             */
/*   Updated: 2018/06/22 16:00:26 by akrushin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int character)
{
	return (character >= 0x20 && character <= 0x7E);
}
