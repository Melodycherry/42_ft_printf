/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaffita <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:08:54 by mlaffita          #+#    #+#             */
/*   Updated: 2024/11/05 22:27:02 by mlaffita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_hexa(unsigned int x, int *len, char hex_case)
{
	char	str[25];
	char	*base_char;
	int		i;

	if (hex_case == 'X')
		base_char = "0123456789ABCDEF";
	else
		base_char = "0123456789abcdef";
	i = 0;
	if (x == 0)
	{
		ft_putchar_len('0', len);
		return ;
	}
	while (x != 0)
	{
		str[i] = base_char[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_putchar_len(str[i], len);
}
