/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_len.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:09:06 by mlaffita          #+#    #+#             */
/*   Updated: 2024/11/05 19:45:16 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar_len(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}
